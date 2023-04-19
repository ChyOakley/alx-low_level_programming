#include "hash_tables.h"

/**
 * key_index - It gives the index of a key
 * @key: It is the key of key/value pair
 * @size: It is the size of array of the hash table
 * Return: It is the index where key/value pair should be stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
