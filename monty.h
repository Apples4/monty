#ifndef _MONTY_H_
#define _MONTY_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
#include <stddef.h>
#define _POSIX_C_SOURCE 200809L

/* functions  and structs */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_v - global structure to use in functions
 * @nn: is stack
 * @args: second argument in the line
 * @buf: input text
 * @fd: file descriptor
 * @c: current line
 * @head: linked list pointer
 * Description: doubly linked list node structure for stack
 */
typedef struct global_v
{
	char *args;
	FILE *fd;
	char *buf;
	stack_t *head;
	int nn;
	unsigned int c;
} globals;

extern globals var_global;

/* opcode functions */
void _push(stack_t **head, unsigned int line_no);
void _pall(stack_t **head, unsigned int line_no);
void _pint(stack_t **head, unsigned int line_no);
void _pop(stack_t **head, unsigned int line_no);
void _add(stack_t **head, unsigned int line_no);
void _swap(stack_t **head, unsigned int line_no);
void _nop(stack_t **head, unsigned int line_no);

/* Execution functions */
void (*exec_opcodes(char *code))(stack_t **head, unsigned int line_no);
void intizlise_var(FILE *fd);
FILE *check_user(int argc, char *argv[]);
int main(int argc, char *argv[]);

/* other functions */
void free_global(void);
void _queue(void);
void _stack(void);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int cmp_chars(char str[], const char *delim);
char *_strtok(char str[], const char *delim);

/* node  operations */
stack_t *add_dnodeint(stack_t **head, const int n);
stack_t *add_dnodeint_end(stack_t **head, const int n);
void free_stack(stack_t *head);

/* error messages */
void push_err(unsigned int line_no);
void node_err(void);
void pint_err(unsigned int line_no);
void pop_err(unsigned int line_no);
void swap_err(unsigned int line_no);
void add_err(unsigned int line_no);
void fd_err1(void);
void fd_err2(char *argv[]);
void fd_err3(char *input, int line_no);

#endif
