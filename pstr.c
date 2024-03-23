#include "monty.h"

/**
 * f_pstr - Implements the pstr opcode.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number in the Monty file.
 */
void f_pstr(stack_t **head)
{
	stack_t *current = *head;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;

		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}

