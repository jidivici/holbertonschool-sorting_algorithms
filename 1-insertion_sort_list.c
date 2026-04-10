#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * using insertion sort by swapping nodes
 * @list: Pointer to the head of the list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *curr, *prev;

	if (!list || !*list || !(*list)->next)
		return;
	curr = (*list)->next;
	while (curr)
	{
		tmp = curr->next;
		while (curr->prev && curr->n < curr->prev->n)
		{
			prev = curr->prev;
			if (prev->prev)
				prev->prev->next = curr;
			curr->prev = prev->prev;
			prev->next = curr->next;
			if (curr->next)
				curr->next->prev = prev;
			curr->next = prev;
			prev->prev = curr;
			if (!curr->prev)
				*list = curr;
			print_list(*list);
		}
	curr = tmp;
	}
}
