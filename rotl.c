#include "monty.h"

/**
 * f_rotl - Implements the rotl opcode.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number in the Monty file.
 */
void f_rotl(stack_t **head)
{
	stack_t *current = *head;
	stack_t *last = NULL;

	if (!current || !current->next)
		return;

	while (current->next)
	{
		last = current;
		current = current->next;
	}

	
	last->next = NULL;
	current->next = *head;
	*head = current;
}

