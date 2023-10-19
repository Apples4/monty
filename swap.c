#include "monty.h"

/**
 * _swap - function that swaps the data of the first and second nodes
 * @head: pointer to the beginning of the list
 * @line_no: line number
 * Return: Nothing
 */
void _swap(stack_t **head, unsigned int line_no)
{
	stack_t *temp = NULL;
	int i = 0;

	temp = (*head);

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	if (i < 2)
		swap_err(line_no);

	temp = (*head);
	(*head) = (*head)->next;
	temp->next = (*head)->next;
	temp->prev = (*head);
	(*head)->next = temp;
	(*head)->prev = NULL;
}
