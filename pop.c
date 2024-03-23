#include "monty.h"

/**
 * f_pop - Removes the top element of the stack.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_pop(stack_t **head, unsigned int number)
{
    stack_t *temp;

    if (!*head)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", number);
        exit(EXIT_FAILURE);
    }

    temp = *head;
    *head = (*head)->next;
    free(temp);
}
