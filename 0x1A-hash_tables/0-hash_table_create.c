#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
