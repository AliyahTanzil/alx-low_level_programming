#include "lists.h"

/**
 * get_nodeint_at_index - A function that gets a node of list at specific index
 * @head: Apointer to listint_t structure
 * @index: The pointer of the node
 * Return: Apointer to the node at a specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i== index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
