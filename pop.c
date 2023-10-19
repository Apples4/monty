#include "monty.h"

/**
 * _pop - function used to remove the top element
 * @head: pointer to the beginning of the list
 * @line_no: line number
 * Return: Nothing
 */
void _pop(stack_t **head, unsigned int line_no)
{
	stack_t *temp = NULL;

	temp = (*head);

	if (temp == NULL || head == NULL)
		pop_err(line_no);

	*head = temp->next;
	free(temp);
}
