#include "shell.h"
#include <stddef.h>

/**
 tokenize- funtion to help tokenize user input
 @command: command recieved from the user
 @argsC: storage for tokens
 Return: return the number of tokens 
 */

 int tokenize(char *command, char *argsC[])
 { 
    char *delim = "", *token;
    int count = 0;

    token = strtok(command, delim);

    while (token)
    {
        argsC[count++] = token;
        token = strtok(NULL, delim);
    }

    argsC[count] = NULL;

    return (count);
 }