#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: If the node at the given index exists, return a pointer to the node.
 *         Otherwise, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *current = head;

    while (current != NULL)
    {
        if (count == index)
            return current;

        current = current->next;
        count++;
    }

    return NULL;
}