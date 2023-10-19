#include "monty.h"

/**
 * _sub - a function that subtracks the top element from the second element
 * @head: pointer to the doubly linked list
 * @line_no: line number
 * Return: Nothing
 */
void _sub(stack_t **head, unsigned int line_no)
{
	stack_t *temp;
	int i = 0;

	temp = (*head);

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	if (i < 2)
		sub_err(line_no);

	temp = (*head)->next;
	temp->n -= (*head)->n;
	_pop(head, line_no);
}
