#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cop;

	cop = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cop->next)
	{
		cop = cop->next;
	}
	cop->next = *head;
	cop->prev->next = NULL;
	cop->prev = NULL;
	(*head)->prev = cop;
	(*head) = cop;
}

