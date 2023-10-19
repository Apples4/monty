#include "monty.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer that points to the begining of the node
 * @n: input data into the struct
 * Return: a pointer of a new node
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		node_err();

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
