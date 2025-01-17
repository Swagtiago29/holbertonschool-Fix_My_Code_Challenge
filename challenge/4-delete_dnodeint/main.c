#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int result;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");

    // Deleting nodes and printing after each deletion
    result = delete_dnodeint_at_index(&head, 5);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        print_dlistint(head);
    printf("-----------------\n");

    // Free the list after all operations are complete
    free_dlistint(head);
    return (0);
}
