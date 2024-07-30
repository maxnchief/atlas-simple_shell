#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**removeNC - function to remove the newline character from user input
@str: user input
@len: length of the user input
Return: return the command without a newline character
*/

char *removeNC(char *str, int len)
{
    if (str > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    return (str);
}