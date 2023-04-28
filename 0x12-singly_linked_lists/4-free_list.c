#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - Frees a linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current_node;

while (head != NULL)
{
current_node = head;
head = head->next;
free(current_node->str);
free(current_node);
}
}
