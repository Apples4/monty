#include "monty.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the beginning of the node
 * @n: input data of the node
 * Return: address of the new_node
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		node_err();

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last_node = *(head);
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	new_node->prev = last_node;
	last_node->next = new_node;

	return (new_node);
}
