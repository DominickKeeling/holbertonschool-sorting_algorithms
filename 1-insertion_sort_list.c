#include "sort.h"
/**
* insertion_sort_list -funtion that sorts doubly linked list in ascending order
* @list: pointer to a list
*
*
*
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b, *temp;

	if (*list == NULL || (*list)->next == NULL || list == NULL)
		return;
	for (b = (*list)->next; b != NULL; b = temp)
	{
		temp = b->next;
		a = b->prev;
		while (a != NULL && b->n < a->n)
		{
			swap_list(list, &a, b);
			print_list((const listint_t *)*list);
		}
	}
}

/**
 * swap_list - swaps two nodes
 * @h: pointer to head
 * @a: node to swap
 * @b: node to swap
 */

void swap_list(listint_t **h, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*h = b;
	(*a)->prev = b;
	*a = b->prev;
}
