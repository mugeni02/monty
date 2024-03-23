#include "monty.h"

/**
 * f_pall - Prints all the values on the stack.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_pall(stack_t **head)
{
    stack_t *current = *head;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
