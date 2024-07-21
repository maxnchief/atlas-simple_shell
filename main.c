#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

/**
 * main - Entry point for the shell program.
 *
 * Description: This function initializes the shell, displays a
 * prompt, reads user input, puts input to command, executes.
 *
 * Return: Always 0 (If Successfull).
 */
int main(void)
{
	char *line;
	char **args;
	int status;

	do
	{
		printf("($) ");
		line = read_line();
		args = parse_line(line);
		status = execute(args);

		free(line);
		free(args);
	}
	while (status);

	return (0);
}