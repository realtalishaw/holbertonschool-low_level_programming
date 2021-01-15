#include "hash_tables.h"

/**
 * key_index - fjkdjfskds
 * @key: lkjdls
 * @size: kfdls
 *
 * Return: jdfskfkdsf
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2((unsigned char *)key);

	return (idx % size);
}
