#include "monty.h"

/**
 * _add - function that adds the two recent elements
 * @head: pointer of the list
 * @line_no: line number
 * Return: Nothing
 */
void _add(stack_t **head, unsigned int line_no)
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
		add_err(line_no);

	temp = (*head)->next;
	temp->n += (*head)->;
	_pop(head, line_no);
}
