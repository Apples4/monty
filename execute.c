#include "monty.h"

/**
 * exec_opcodes - function that selects the right function to execute
 * @code: opcode is passes
 * Return: Pointer to function that executes a code
 */
void (*exec_opcodes(char *code))(stack_t **head, unsigned int line_no)
{
	instruction_t function[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{NULL, NULL},
	};
	int j = 0;

	for (; function[j].opcode; j++)
	{
		if (_strcmp(function[j].opcode, code) == 0)
			break;
	}
	return (function[j].f);
}
