#include "main.h"
/**
**_exit - exits the shell
**Return: void
**/

	int _exit(void)
	{
		return (-1);
	}


/**
**_env - prints environment
**Return: void
**/

	int _env(void)
	{
		unsigned int i;

		i = 0;
		while (environ[i] != NULL)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
			i++;
		}
		return (0);
	}

