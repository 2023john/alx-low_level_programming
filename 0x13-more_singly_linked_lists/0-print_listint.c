#include "lists.h"

/**
 * print_listint - prints all the element of a list
 * @h: pointer to a list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
