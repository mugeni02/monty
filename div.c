#include "monty.h"

/**
 * f_div - Divides the second top element of the stack by the top element.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_div(stack_t **head, unsigned int number)
{
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n /= (*head)->n;
    f_pop(head, number);
}

