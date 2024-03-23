#include "monty.h"

/**
 * f_mul - Multiplies the second top element of the stack with the top element.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_mul(stack_t **head, unsigned int number)
{
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't mul, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n *= (*head)->n;
    f_pop(head, number);
}

