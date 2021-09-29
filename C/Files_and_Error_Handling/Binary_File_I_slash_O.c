/*
 * If you want to write entire blocks of memory to a file you can use binary functions.
 * Use these functions on fopen():
 * - rb open a file that exist for reading.
 * - wb open a file that does not exist for write.
 * - ab open a file that does not exist for append.
 * - rb+ open a file for reading and writing from beginning.
 * - wb+ open a file for reading and writing, overwriting the file.
 * - ab+ open a file for reading and writing, appending the file.
 * fwrite(ptr, item_size, num_items, file) will write the number of items of the size of items from pointer to the file.
 * fread(ptr, item_size, num_items, file) will read the number of items of the size of items from the file and send to the pointer.
 * feof(file) return 0 when the end of the file has been reached.
*/