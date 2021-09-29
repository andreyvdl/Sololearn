/*
 * Control what the user makes to your program is almost inpredicable.
 * To solve this you can make error menssages to tell something go wrong and then close the program.
 * You can also use "errno, perror() and strerror()".
 * "errno.h" is a error library.
 * "perror(str)" sends a error string menssage.
 * "strerror(errno)" returns a string explaining the error code of errno.
 * "printf("error code: %d", errno)" sends the code number of the error. 
*/