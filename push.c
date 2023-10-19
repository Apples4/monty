#include "monty.h"

/**
 * _push - function to add to stack
 * @head: pointer of doubly linked list
 * @line_no: line number
 * Return: Nothing
 */
void _push(stack_t **head, unsigned int line_no)
{
	int i, j = 0;

	if (!var_global.args)
		push_err(line_no);

	for (i = 0; var_global.args[i] != '\0'; i++)
	{
		if (!isdigit(var_global.args[i]) && var_global.args[i] != '-')
			push_err(line_no);

	}

	j = atoi(var_global.args);

	if (var_global.nn == 1)
		add_dnodeint(head, j);
	else
		add_dnodeint_end(head, j);
}
