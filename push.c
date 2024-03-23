#include "monty.h"

/**
 * f_push - Pushes an element onto the stack.
 * @head: Pointer to the top of the stack
 * @number: Integer value to push onto the stack
 */
void f_push(stack_t **head, unsigned int number)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = number;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head)
        (*head)->prev = new_node;

    *head = new_node;
}
