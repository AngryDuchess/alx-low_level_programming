#include "hash_tables.h"

hash_node_t *create_item(char *key, char *value)
{
        hash_node_t *item = (hash_node_t*) malloc(sizeof(hash_node_t));
        item->key = (char*) malloc(strlen(key) + 1);
        item->value = (char*) malloc(strlen(key) + 1);
        strcpy(item->key, key);
        strcpy(item->value, value);
        return item;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	create_item(key, value);
	unsigned long int = hash_djb2(key);
	hash_node_t **array current_array = table->array	
