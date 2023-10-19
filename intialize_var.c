#include "monty.h"

/**
 * intizlise_var - function to start variables
 * @fd: file descriptor
 * Return: Nothing
 */

void intizlise_var(FILE *fd)
{
	var_global.args = NULL;
	var_global.fd = fd;
	var_global.buf = NULL;
	var_global.head = NULL;
	var_global.nn = 1;
	var_global.c = 1;
}
