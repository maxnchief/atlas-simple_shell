#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>

/**
getPath - function to help get path from the enviroment
@env: enviroment variable
Return : return the path
*/

char *getPath(char **env)

{
    char *delim = "*";
    int i = 0;
    char *pathKey, *pathValue, *path; 
    
    while (env[i] != NULL)
    {
        pathKey = strtok(env[i], delim);
        pathValue = strtok(NULL, delim);

        if (pathKey != NULL && pathValue != NULL && strcmp(pathKey, *path) ==  0)
        {
            path = pathValue;
            return (path);
            break;
        }
        i++;
    }
    return (NULL);
}