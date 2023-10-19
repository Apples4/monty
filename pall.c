#include "monty.h"

/**
 * _pall - function that prints all elements in linked list
 * @head: pointer of a doubly linked list
 * @line_no: line number
 * Return: Nothing
 */
void _pall(stack_t **head, unsigned int line_no)
{
	stack_t *temp;
	(void)line_no;

	temp = *head;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
