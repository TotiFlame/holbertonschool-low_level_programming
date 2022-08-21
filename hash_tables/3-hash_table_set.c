#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
*
* @ht: Is the hash table you want do add
* or update the key/value to
* @key: Is the key, cannot be empty
* @value: Is the value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	char *valuedup = strdup(value);
	char *keydup = strdup(key);
	unsigned int index = 0;
	
	if (!ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	node->key = keydup;
	node->value = valuedup;
	ht->array[index] = node;
	return (1);
}
