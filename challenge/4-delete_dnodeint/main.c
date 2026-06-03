#include "lists.h"

/**
 * main - test the delete_dnodeint_at_index function
 *
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
	dlistint_t *head = NULL;

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

	/* delete the node at index 5 (the value 98) */
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");

	/* delete the head until the list is empty */
	while (head != NULL)
	{
		delete_dnodeint_at_index(&head, 0);
		print_dlistint(head);
		printf("-----------------\n");
	}

	free_dlistint(head);
	return (0);
}
