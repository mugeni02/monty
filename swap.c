#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (line number)
 */
void f_swap(stack_t **head, unsigned int number)
{
    stack_t *temp;
     stack_t *second;

    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    temp = (*head)->next;
    second = (*head)->next->next;

    (*head)->next = second;
    temp->next = *head;
    *head = temp;
}
