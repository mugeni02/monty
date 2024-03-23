#include "monty.h"

/**
 * f_rotr - Implements the rotr opcode.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number in the Monty file.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
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

