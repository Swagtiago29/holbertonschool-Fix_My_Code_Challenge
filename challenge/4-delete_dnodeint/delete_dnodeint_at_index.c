#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *saved_head;
    dlistint_t *tmp;
    unsigned int p;

    if (*head == NULL)
    {
        return (-1);
    }

    saved_head = *head;
    p = 0;
    while (p < index && *head != NULL)
    {
        *head = (*head)->next;
        p++;
    }

    if (p != index)
    {
        *head = saved_head;
        return (-1);
    }

    if (index == 0)
    {
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
        if (tmp != NULL)
        {
            tmp->prev = NULL;
        }
    }
    else
    {
        (*head)->prev->next = (*head)->next;

        if ((*head)->next != NULL)
        {
            (*head)->next->prev = (*head)->prev;
        }

        tmp = (*head)->next;
        free(*head);
        *head = tmp;
    }

    return (1);
}
