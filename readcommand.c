#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
/**
readCommand - Function to take users input
 
 Return: return number of characters read from the starndard input
 */

 int readCommand(void)
 {
    size_t n = 0;
    char *buff = NULL;
    int size;

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
    free(buff);
    return (size);
 }