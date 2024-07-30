#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
main - entry point
Return: return 0 on sucsess
 */

 int main(int argc, char **argv, char **env)

 {
    /*Loop to continue displaying a prompt */
    while(1)
    {
        scanCommand(argv, env);
        /*function recievs user input from stdin before tokenization*/
    }
    return (0);
}

/**
 * parse_line - Split line into tokens (arguments)
 * @line: Input line
 *
 * Return: Array of tokens
 */
char **parse_line(char *line)
{
        int bufsize = 0;
        char **tokens = malloc(bufsize * sizeof(char *));
        char *token;

        if (!tokens)
        {
                fprintf(stderr, "allocation error\n");
        }
}
