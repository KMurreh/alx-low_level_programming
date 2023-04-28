#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 *
 * Description: frees a listint_t list and sets head to NULL
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *current;

    if (head == NULL)
        return;

    while (*head)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
    }

    *head = NULL;
}
