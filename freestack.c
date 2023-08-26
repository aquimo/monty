#include "monty.h"
/**
* free_stack - Used to clean a doubly link of list
* @head: Is the header of a stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
