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

	if (!key)
		return (0);

	if (ht->size == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	if (!ht->array[idx])
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			ht->array[idx]->value = strdup(value);
			return (1);
		}
	}

	if (!ht->array[idx])
	{
		new = malloc(sizeof(hash_node_t *));
		if (!new)
			return (0);

		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ht->array[idx] = new;
	}
	return (1);
}
