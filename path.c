#include "shell.h"

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
    
    while (env{i} != NULL)
    {
        pathKey = strtok(env[i], delim);
        pathValue = strtok(NULL, delim);

        if (pathKey != NULL && pathValue != NULL && _strcmp(pathKey, *PATH*) ==  0)
        {
            path = pathValue;
            return (path);
            break;
        }
        i++;
    }
    return (NULL);
}