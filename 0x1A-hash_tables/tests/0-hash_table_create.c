#include "hash_tables.h"

/*hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = (hash_node_t*) malloc(sizeof(hash_node_t));
	item->key = (char*) malloc(strlen(key) + 1);
	item->value = (char*) malloc(strlen(key) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return item;
}*/

hash_table_t *hash_table_create(unsigned long int size)
{
	/*initialize array of pointers to nodes */
	hash_node_t **array;
	unsigned long int i = 0;

	/*allocate memory for table, if allocation fails, return Null*/
	hash_table_t *table = (hash_table_t*) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/*allocate memory for the array of pointers to hash node stucteures by using calloc to find the size of each node*/
	array = (hash_node_t**) calloc(size, sizeof(hash_node_t*));
	
	/*if allocation fails, table will be unusable and in order to precent leaks, free up the memory allocated to table previously and return NULL*/
	if (array == NULL)
	{
		free(table);
		return(NULL);
	}

	/*initialize each item in the array to NULL*/
	for(; i < size; i++)
		array[i] = NULL;

	/*set size and array of the table to values calculated earlier*/
	table->size = size;
	table->array = array;

	return (table);
}
