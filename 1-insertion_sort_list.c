#include "sort.h"

/**
 * swap_node - swap the right node with the left node if it's higher
 * @list: the doubled linked list to analyse
 * @left: the node to exchange with the right one
 * @right: the node to exchange with the left one
 */

void swap_node(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev != NULL)
		left->prev->next = right;
	if (right->next != NULL)
		right->next->prev = left;
	right->prev = left->prev;
	left->next = right->next;
	right->next = left;

	left->prev = right;

	right->next = left;
	if (right->prev == NULL)
		*list = right;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to a node of the doubly linked
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *replace;

	if (list == NULL || (*list)->next == NULL)
		return;
	temp = (*list)->next;
	while (temp != NULL)
	{
		replace = temp;
		while (replace->prev != NULL && replace->prev->n > replace->n)
		{
			swap_node(list, replace->prev, replace);
			print_list(*list);
		}
		temp = temp->next;
	}
}
