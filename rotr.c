#include "monty.h"
/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter:line_numner
 * return: no return
 */
void f_rotr(sack_t **head, _attribute_((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->orev = NULL;
	(*head)->prev = copy;
	(*heag) = copy;
}

