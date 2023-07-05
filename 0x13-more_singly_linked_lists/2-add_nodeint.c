#include "lists.h"
/**
 * add_nodeint : add a new node in front
 * @head: pointer to head
 * @n: number
 * Return: Addres of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new = malloc(sizeof(listint_t));

    if (new == NULL)
    {
        return (NULL);
    }

    new->n = n;
    new->next = *head;
    *head = new;
    return (new);
}
