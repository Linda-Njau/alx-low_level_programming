#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag;

	if (ht == NULL)
		return;
	flag = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 0)
				flag = 1;
			else
				printf(",");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
