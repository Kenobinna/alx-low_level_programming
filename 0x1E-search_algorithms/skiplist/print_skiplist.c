Adinoyi03
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x1E-search_algorithms/skiplist/print_skiplist.c
@Adinoyi03
Adinoyi03 Create free_skiplist.c
 1 contributor
27 lines (25 sloc)  548 Bytes
#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * print_skiplist - dump the content of a skiplist_t
 *
 * @list: Pointer to the head of the list
 *
 * Return: void
 */
void print_skiplist(const skiplist_t *list)
{
	const skiplist_t *node;

	printf("List :\n");
	for (node = list; node; node = node->next)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\nExpress lane :\n");
	for (node = list; node; node = node->express)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\n");
}
