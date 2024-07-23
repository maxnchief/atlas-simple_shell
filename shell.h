#ifdef SHELL_H
#define SHELL_H

#define BUFFER_SIZE 1024 /* initial size input buffer */
#define DELIM " \t\r\n\a" /* chars used to split input line into tokens */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
int readCommand(void)
char *removeNC(char *str, int len)

#endif
