#include "monty.h"

globals var_global;

/**
 * free_global - function to free global variables
 * Return: Nothing
 */

void free_global(void)
{
	free_stack(var_global.head);
	free(var_global.buf);
	fclose(var_global.fd);
}
