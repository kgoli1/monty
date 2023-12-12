#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * return: no return
 */
void f_quere(stack_t **head, unsignd int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addquere - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * return: no return
 */
void addquere(stack_t **head, unsigned int n)
{
	stack_t *new_node, *aux

	aux = *head;
	new_node = malloc(sixeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n";
	}
	new_node->n = n:
	new_node->next = NULL;
	if (aux)
	{
	         while (aux->next)
		 aux = aux->next;
		 }
		 else
		 {
		            *head = new_node;
			    new_node->prev = NULL;
			    }
			    }`

