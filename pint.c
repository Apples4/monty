#include "monty.h"

/**
 * _pint - function used to prints values at the top of list
 * @head: pointer of the doubly linked list
 * @line_no: Line number
 * Return: Nothing
 */
void _pint(stack_t **head, unsigned int line_no)
{
	stack_t *temp = NULL;

	temp = (*head);

	if (*head == NULL)
		pint_err(line_no);

	printf("%d\n", temp->n);
}
