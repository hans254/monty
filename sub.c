#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aut;
	int sas, node;

	aut = *head;
	for (node = 0; aut != NULL; node++)
		aut = aut->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aut = *head;
	sas = aut->next->n - aut->n;
	aut->next->n = sas;
	*head = aut->next;
	free(aut);
}

