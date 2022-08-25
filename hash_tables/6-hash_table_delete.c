#include "hash_tables.h"
/**
* hash_table_delete - Deletes a hash table
*
* @ht: Is the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *node;

	if (!ht)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
