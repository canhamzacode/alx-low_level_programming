#include "lists.h"

/**
 * print_listint - print out all data in a singly linked list
 * @h: pointer to the first node
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
    size_t nelem;

    nelem = 0;
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        nelem++;
    }
    return (nelem);
}
