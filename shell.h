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

#define MAX_ARG 125

int main(void)
int scanCommand(void)
char *removeNC(char *str, int len)
int tokenize(char *command, char *argsC[])
int exeCmd(char *argsC[])
char *getPath(char **env)
int main(int argc, char **argv, char **env)


#endif
