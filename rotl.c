#include "monty.h"
/**
 * f_rotl - rotates the stack to the top
 * @head: stackhead
 * @counter: line_number
 * return: no return
 */
void f_rotl(stack_t **head, _attribute_((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;

}
