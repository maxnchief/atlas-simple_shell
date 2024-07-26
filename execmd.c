#include "shell.h"

/**
exeCmd - function to execute userr command 
@argsC; an array of commands from the user
Return: return 0 on success
*/

int exeCmd(char *argsC[])
{
    pid_t pid;
    int exe;

    pid = fork();

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
        wait();
    
    return (0);
}