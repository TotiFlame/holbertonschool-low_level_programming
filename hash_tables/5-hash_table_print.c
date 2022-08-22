#include "hash_tables.h"
/**
* hash_table_print - Prints a hash table
*
* @ht: Is the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (j != 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			node = ht->array[i]->next;
			while (node)
			{
				printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
			j++;
		}
		i++;
	}
	printf("}\n");
}
