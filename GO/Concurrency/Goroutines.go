package main

import (
	"fmt"
	"time"
)

/*
** This sequential program will print numbers 0 to 5, then 6 to 10;
** Putting "go" before a function call will execute a goroutine;
** Goroutines don't wait to be executed;
** Because of that the function call with go will not return any output;
** The main will finish before executing the goroutines;
** To fix that we need to make the program wait with the time.Sleep() function;
** Just like sleep() in Clang, it makes the program wait;
** We multiply the time by milliseconds;
** Now we have a messy output;

** We can use channels to make the program wait;
** Channels are like pipes, they need to receive information to work;
** We can create a channel using make() function:
	<channel_name> := make(chan <channel_type>)
** To send or receive information from a channel we usa a left arrow "<-";
** The information go to the same side the arrow points;
** If we don't need the value of the channel and only continue with goroutine, we can just point to nothing;
** Now the main() waits to receive information from channel;
** if channel returns nothing... well consider yourself softlocked;
** if you don't need to send data to a channel, you can use the close() function;
** honestly the explanation said the using goroutines are better to the system, but i don't really believe it, the more you use the hardware, heavier it will be;
*/

func out(from, to int) {
	for i := from; i <= to; i++ {
		time.Sleep(50 * time.Millisecond)
		fmt.Println(i)
	}
}

func out_channel(from, to int, ch chan bool) {
	for i := from; i <= to; i++ {
		time.Sleep(50 * time.Millisecond)
		fmt.Println(i)
	}
	ch <- true
}

func evenSum(from, to int, ch chan int) {
	result := 0
	for i := from; i <= to; i++ {
		if i%2 == 0 {
			result += i
		}
	}
	ch <- result
}

func squareSum(from, to int, ch chan int) {
	result := 0
	for i := from; i <= to; i++ {
		if i%2 == 0 {
			result += i * i
		}
	}
	ch <- result
}

func main() {
	out(0, 5)
	out(6, 10)
	go out(11, 15)
	go out(16, 20)
	time.Sleep(500 * time.Millisecond)
	fmt.Println("=========================")

	ch := make(chan bool)
	go out_channel(21, 25, ch)
	go out_channel(26, 30, ch)
	<-ch
	fmt.Println("=========================")

	evenCh := make(chan int)
	sqCh := make(chan int)
	go evenSum(0, 100, evenCh)
	go squareSum(0, 100, sqCh)
	fmt.Println(<-evenCh + <-sqCh)
}
