#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index of a linked list.
 * @head: Double pointer to the head node of the linked list.
 * @index: Index of the node to delete. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        unsigned int i;
        listint_t *temp, *prev;

        if (*head == NULL)
                return (-1);

        if (index == 0)
        {
                temp = *head;
                *head = temp->next;
                free(temp);
                return (1);
        }

        prev = *head;
        temp = prev->next;

        for (i = 1; temp != NULL && i < index; i++)
        {
                prev = temp;
                temp = temp->next;
        }

        if (temp == NULL)
                return (-1);

        prev->next = temp->next;
        free(temp);

        return (1);
}
