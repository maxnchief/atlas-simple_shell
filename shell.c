#include "shell.h"

/**
main - entry point
Return: return 0 on sucsess
 */

 int main(void)

 {
    /*Loop to continue displaying a prompt */
    while(1)
    {
        readCommand();

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
        int bufsize = BUFFER_SIZE, position = 0;
        char **tokens = malloc(bufsize * sizeof(char *));
        char *token;

        if (!tokens)
        {
                fprintf(stderr, "allocation error\n");
                exit(EXIT_FAILURE);
        }
        
/**
 * execute - Execute shell built-in or program launch
 * @args: Array of arguments
 *
 * Return: 1 if shell should stay on, 0 if dhell should terminate
 */
int execute(char **args)
{
	int builtin_status;
	pid_t pid;
	int status;

	if (args[0] == NULL)
	{
		return (1);
	}

	builtin_status = handle_builtin_commands(args);
	if (builtin_status != -1)
	{
		return (builtin_status);
	}

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("hsh")
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("hsh");
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
