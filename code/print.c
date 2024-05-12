#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void refresh_print(const char *format, ...);

void refresh_print(const char *format, ...) {
    // Clear the screen and move the cursor to the top-left corner
    printf("\033[2J\033[H");

    // Start variadic argument processing
    va_list args;
    va_start(args, format);
    
    // Print the new content using vprintf which accepts a va_list
    vprintf(format, args);

    // End variadic argument processing
    va_end(args);

    // Optionally, flush the output to ensure it appears immediately
    fflush(stdout);
}