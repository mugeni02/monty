#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
/**
 * push - Pushes an element onto the stack.
 *
 * @items: array that acts as the stack.
 * @top: Pointer to an integer representing the index of the top of the stack.
 * @value: Integer value to be pushed onto the stack.
 * @line_number: Line number in the file for error reporting.
 *
 * Return: No return value.
 */
void push(int items[], int *top, int value, int line_number)
{
	if (*top == STACK_SIZE - 1)
	{
		fprintf(stderr, "L%d: stack overflow\n", line_number);
		exit(EXIT_FAILURE);
	}
	items[++(*top)] = value;
}
/**
 * pall - Prints all elements of the stack.
 *
 * @items: Array representing the stack.
 * @top: Integer representing the index of the top of the stack.
 *
 * Return: No return value.
 */
void pall(const int items[], int top)
{
	int i;


	for (i = top; i >= 0; i--)
	{
		printf("%d\n", items[i]);
	}
}
/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int stack[STACK_SIZE];
	int top = -1;

	push(stack, &top, 10, 1);
	push(stack, &top, 20, 2);
	push(stack, &top, 30, 3);
	pall(stack, top);
	return (0);
}
