#include "sort.h"

/**
 * insertion_sort_list - sorting from a doubly linked list
 * @list: pointer to pointer to a list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *c, *p;

	if (!list || !(*list) || !((*list)->next))
		return;

	c = *list;

	while (c)
	{
		while (c->prev && c->n < c->prev->n)
		{
			p = c->prev;
			p->next = c->next;
			c->prev = p->prev;
			p->prev = c;
			c->next = p;
			if (p->next)
				p->next->prev = p;
			if (c->prev != NULL)
				c->prev->next = c;
			else
				*list = c;
			print_list(*list);
		}
		c = c->next;
	}
}
