#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0; // Initialize a counter to keep track of the number of nodes

	while (h != NULL) // Iterate through the linked list until the end is reached
	{
		if (h->str == NULL) // If the string in the current node is NULL
			printf("[0] (nil)\n"); // Print "[0] (nil)"
		else
			printf("[%d] %s\n", h->len, h->str); // Print the length and string of the current node

		h = h->next; // Move to the next node
		count++; // Increment the counter
	}

	return (count); // Return the total number of nodes in the list
}
