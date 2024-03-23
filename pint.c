#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_pint(stack_t **head, unsigned int number)
{
    if (!*head)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*head)->n);
}

