#include "shell.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
readCommand - Function to take users input
 
 Return: return number of characters read from the starndard input
 */

int scanCommand(char **argv, char **env)
{
   size_t n = 0;
   char *buff = NULL, *command;
   int size, argcsount;

   size = getline(&buff, &n, stdin);
   if (size == -1)
   {
      if (feof(stdin))
      {
         free(buff);
         exit(0);
      }
      else
      {
         perror("Failed to read user input");
         free(buff);
      }
   /*the code above accounts for input errors, and allocates in event of failure*/
   }

   buff = removeNC(buff, size);
   tokenize(buff);
   /**above stores a new command without a newline */
   exeCmd(argv, env);
   
   free(buff);
    return (size);
   
}