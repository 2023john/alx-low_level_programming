#include "lists.h"

/**
 * sum_listint - Sum all data(n) of linked list
 * @head: Pointer to a node
 *
 * Return: Sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
