#include "monty.h"

/**
 * free_stack -  function that frees a stack_t list.
 * @head: pointer to the first node
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
