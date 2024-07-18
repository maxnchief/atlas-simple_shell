#include "shell.h"

/**
readCommand - Function to take users input
 
 Return: return number of characters read from the starndard input
 */

 int readCommand(void)
 {
    size_t n = 0;
    char *buff = NULL;
    int size;

    size = grtline(&buff, &n, stdin);

    return (size);
 }