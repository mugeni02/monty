#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the stack.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_pchar(stack_t **head, unsigned int number)
{
    if (!*head)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", number);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n < 0 || (*head)->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", (*head)->n);
}

