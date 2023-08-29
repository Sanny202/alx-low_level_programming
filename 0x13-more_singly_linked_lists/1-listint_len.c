#include "lists.h"

/**
 * listint_len - this  returns the number of elements in a linked lists
 * @a: linked list of type listint_t to traverse
 *
 * Return:shows number of nodes
 */
size_t listint_len(const listint_t *a)
{
	size_t num = 0;

	while (a)
	{
		num++;
		a = a->next;
	}

	return (num);
}
