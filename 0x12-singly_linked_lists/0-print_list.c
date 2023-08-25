#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints items of a linked list 
 * @x: pointer to the list to print
 *
 * Return: the number of nodes that have been printed 
 **/
size_t print_list(const list_t *x)

{
	size_t s = 0;
	while (x)

	{
		if (!x->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", x->len, x->str);
		x = x->next;
		s++;
	}

	return (s);
}
