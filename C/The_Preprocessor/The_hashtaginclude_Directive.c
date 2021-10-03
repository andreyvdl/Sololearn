/*
 * The "#include" directive loads a header file of functions and macros from a library.
 * They are:
 * "stdio" in/out functions, includes "printf" and "file";
 * "stdlib" memory management and other things;
 * "string" functions about strings;
 * "errno" errno global variable and error code macros;
 * "math" mathematical functions;
 * "time" time/date utilities.
 * -------------------------------------------------------
 * They need the ".h" at the end and be between brackets:
 * "#include <stdio.h>".
 * For a user defined header, if it's in another location you need to set the path, with the ".h" an it's all in quotation marks:
 * "#include "c/user/file_header/myutil.h"".
*/