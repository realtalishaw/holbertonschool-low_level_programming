#include "hash_tables.h"

/**
 * hash_table_set - fdssd
 * @ht: kfjdskjfsd
 * @key: fkdjksds
 * @value: fkjldfls
 *
 * Return: kfjds
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	hash_node_t *new;

	if (!ht)
		return (0);
	if (!key || strcmp(key, "") == 0)
		return (0);
	if (ht->size == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
	{
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	new->next = ht->array[idx];
	new->key = strdup(key);
	new->value = strdup(value);
	ht->array[idx] = new;
	return (1);
}
