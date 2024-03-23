#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_add(stack_t **head, unsigned int number)
{
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n += (*head)->n;
    f_pop(head, number);
}

