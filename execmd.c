#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
exeCmd - function to execute userr command 
@argsC; an array of commands from the user
Return: return 0 on success
*/

int exeCmd(char *argsC[])
{
    pid_t pid;
    int exe, status;

    pid = fork();
    char *path = getPath();
    printf("%s", path);

    if (pid == -1)
    {
        perror("failed to create process");
    }
    else if (pid == 0)
    {
        exe = execve(argsC[0], argsC, NULL);
        if (exe == -1)
        {
            perror("Error executing command");
        }
    }
    else
        wait(&status);
    
    return (0);
}