#include "lists.h"

/**
 * dlistint_len - return the num of elements in
 * a double linked list
 *
 * @x: head of a list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *x)
{
	int count;

	count = 0;

	if (x == NULL)
		return (count);

	while (x->prev != NULL)
		x = x->prev;

	while (x != NULL)
	{
		count++;
		x = x->next;
	}

	return (count);
}
