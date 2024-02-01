#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *node;
    int flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; ++i)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            if (flag == 1)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            node = node->next;
            flag = 1;
        }
    }
    printf("}\n");
}
