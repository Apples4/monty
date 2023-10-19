#define _POSIX_C_SOURCE 200809L
#include "monty.h"

/**
 * main - Entry point
 * @argc: number of arguments users input
 * @argv: string of user inputs
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	size_t n = 256;
	ssize_t user = 0;
	FILE *fd;
	char *input[2] = {NULL, NULL}, *delim = " \t\n";
	void (*f)(stack_t **head, unsigned int line_no);

	fd = check_user(argc, argv);
	intizlise_var(fd);
	user = getline(&var_global.buf, &n, fd);
	while (user != -1)
	{
		input[0] = _strtok(var_global.buf, delim);
		if (input[0] && input[0][0] != '#')
		{
			f = exec_opcodes(input[0]);
			if (!f)
				fd_err3(input[0], var_global.c);

			var_global.args = _strtok(NULL, delim);
			f(&var_global.head, var_global.c);
		}
		user = getline(&var_global.buf, &n, fd);
		var_global.c++;
	}
	free_global();
	return (0);
}
