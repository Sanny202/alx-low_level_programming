#include "lists.h"

/**
 * print_listint this  prints all the elements in a linked list
 * @x:its a linked list of type listint_t to print
 *
 * Return:tis is the  number of nodes
 */
size_t print_listint(const listint_t *x)
{
	size_t num = 0;

	while (x)
	{
		printf("%d\n", x->n);
		num++;
		x = x->next;
	}

	return (num);
}
