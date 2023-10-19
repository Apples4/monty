#include "monty.h"

/**
 * check_user - function to check user input
 * @argc: number of arguments given
 * @argv: argument vector
 * Return: FILE
 */
FILE *check_user(int argc, char *argv[])
{
	FILE *fd;

	if (argc != 2)
		fd_err1();

	fd = fopen(argv[1], "r");

	if (fd == NULL)
		fd_err2(argv);
	return (fd);
}
