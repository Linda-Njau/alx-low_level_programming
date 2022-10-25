#include "main.h"
/**
 * print_list - prints linked list
 * @h: pointer to first node
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h);
{
	int count;
	const list_t nodeptr = NULL;
	
	nodeptr = malloc(sizeof(list_t));
	nodeptr = h;
	while (nodeptr != NULL)
	{
		if (nodeptr->str == NULL)
			printf("[0] (nil)\n")
		else
			printf("[%i] %s\n", nodeptr->len nodeptr->str);
	}
	nodeptr = nodeptr->next;
	count++
		return(count);
}



			
			


		   	

			

