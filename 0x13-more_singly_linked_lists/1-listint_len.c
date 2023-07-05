#include "lists.h"
/**
 * listint_len : return luner of elemnts in the list
 * *h: pointer to head
 * Return: the length of list
 */
size_t listint_len(const listint_t *h)
{
    size_t len = 0;
    const listint_t *current = h;

    while (current != NULL)
    {
        current = current->next;
        len++;
    }
    return (len);
}
