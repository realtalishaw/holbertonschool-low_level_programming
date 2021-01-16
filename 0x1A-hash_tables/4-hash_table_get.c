#include "hash_tables.h"

/**
 * hash_table_get - kfjdkfsdfs
 * @ht: fdsdfs
 * @key: fjgsd
 *
 * Return: dkjka
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = 0;
	hash_node_t *temp;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	while (idx < ht->size)
	{
		if (ht->size)
		{
			temp = ht->array[idx];
			while (temp)
			{
				if (strcmp(key, temp->key) == 0)
					return (temp->value);
				temp = temp->next;
			}
		}
		idx++;
	}
	return (NULL);
}
