#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second top element
 *         of the stack by the top element of the stack.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_mod(stack_t **head, unsigned int number)
{
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n %= (*head)->n;
    f_pop(head, number);
}

