#include <stdlib.h>
#include "lists.h"

/**
 * list_len returns the number  of elements in a linked list
 * @a: points to the list_t list
 *
 * Return: number of elements in a
 */
size_t list_len(const list_t *a)
{
	size_t n = 0;

	while (a)
	{
		n++;
		a = a->next;
	}
	return (n);
}
