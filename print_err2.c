#include "monty.h"

/**
 * add_err - function that printe an error for add
 * @line_no: line number
 * Return: Nothing
 */
void add_err(unsigned int line_no)
{
	fprintf(stderr, "L%u: ", line_no);
	fprintf(stderr, "can't add, stack too short\n");
	free_global();
	exit(EXIT_FAILURE);
}

/**
 * fd_err1 - function to check file descriptor error
 * Return: Nothing
 */
void fd_err1(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * fd_err2 - function to check file descriptor error
 * @argv: input of file
 * Return: Nothing
 */
void fd_err2(char *argv[])
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}

/**
 * fd_err3 - function to check file descriptor error
 * @input: char monty file input
 * @line_no: line number
 * Return: Nothing
 */
void fd_err3(char *input, int line_no)
{
	fprintf(stderr, "L%u: ", line_no);
	fprintf(stderr, "unknown instruction %s\n", input);
	free_global();
	exit(EXIT_FAILURE);
}

/**
 * sub_err: function to print error on sub function
 * @line_no: line number
 * Return: Nothing
 */
void sub_err(unsigned int line_no)
{
	fprintf(stderr, "L%u: ", line_no);
	fprintf(stderr, "can't sub, stack too short\n");
	free_global();
	exit(EXIT_FAILURE);
}
