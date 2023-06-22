#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *b;
	(void)counter;

	b = *head;
	while (b)
	{
		if (b->n > 127 || b->n <= 0)
		{
			break;
		}
		printf("%c", b->n);
		b = b->next;
	}
	printf("\n");
}

