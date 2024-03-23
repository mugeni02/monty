#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_sub(stack_t **head, unsigned int number)
{
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n -= (*head)->n;
    f_pop(head, number);
}

