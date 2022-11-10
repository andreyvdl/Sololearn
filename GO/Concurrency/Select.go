package main

import (
	"fmt"
	"time"
)

/*
** Select can be used to wait for multiple channel operations;
** Is very similar to switch statement:
	select {
	case <channel_name> := <-<channel>:
		<code>
	case <-<channel>:
		<code>
	default:
		<code>
	}
** Select will execute the first case that is receives data;
** But if both are received at the same time, it will execute randomly;
** The default case is optional and will be executed if none of the cases are ready;
*/

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
	evenCh := make(chan int)
	sqCh := make(chan int)

	go evenSum(0, 100, evenCh)
	go squareSum(0, 100, sqCh)
	for {
		select {
		case x := <-evenCh:
			fmt.Println("Even sum:", x)
			return
		case x := <-sqCh:
			fmt.Println("Square sum:", x)
			return
		default:
			fmt.Println("Nothing available")
			time.Sleep(50 * time.Millisecond)
		}
	}
}
