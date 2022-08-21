#include "hash_tables.h"

/**
* hash_table_create - this function creates a hash table
* @size: size of the table
* Return: a pointer to the newly hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
