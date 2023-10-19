#include "monty.h"

/**
 * push_err - function that prints the err for push
 * @line_no: line number
 * Return: Nothing
 */
void push_err(unsigned int line_no)
{
	fprintf(stderr, "L%u: ", line_no);
	fprintf(stderr, "usage: push integer\n");
	free_global();
	exit(EXIT_FAILURE);
}

/**
 * node_err - functions the prints erro and free variables
 * Return: Nothing
 */
void node_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_global();
	exit(EXIT_FAILURE);
}

/**
 * pint_err - function print error for pint
 * @line_no: line number
 * Return: Nothing
 */
void pint_err(unsigned int line_no)
{
	fprintf(stderr, "L%u: ", line_no);
	fprintf(stderr, "can't pint, stack empty\n");
	free_global();
	exit(EXIT_FAILURE);
}

/**
 * pop_err - function that prints pop err
 * @line_no: line number
 * Return: Nothing
 */
void pop_err(unsigned int line_no)
{
	fprintf(stderr, "L%u: ", line_no);
	fprintf(stderr, "can't pop an empty stack\n");
	free_global();
	exit(EXIT_FAILURE);
}

/**
 * swap_err - function that prints swap err
 * @line_no: line number
 * Return: Nothing
 */
void swap_err(unsigned int line_no)
{
	fprintf(stderr, "L%u: ", line_no);
	fprintf(stderr, "can't swap, stack too short\n");
	free_global();
	exit(EXIT_FAILURE);
}
