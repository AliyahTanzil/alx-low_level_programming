
mecomonteshbtn
/
C-low_level_programming
Public
Code
Issues
Pull requests
3
Actions
Projects
More
C-low_level_programming/0x13-more_singly_linked_lists/102-free_listint_safe.c
@mecomonteshbtn
mecomonteshbtn corrections on project 102
 History
 1 contributor
45 lines (40 sloc)  708 Bytes
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_list(temp);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
