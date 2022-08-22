#include "hash_tables.h"
/**
* hash_table_get - Retrieves the value associated with a key
*
* @ht: Is the hash table to look into
* @key: Is the key we are looking for
*
* Return: Value associated with the element,
* or NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (!ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	if (strcmp(ht->array[index]->key, key) != 0)
		ht->array[index] = ht->array[index]->next;
	return (ht->array[index]->value);
}
