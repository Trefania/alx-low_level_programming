#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
        size_t count = 0;

        while (h != 0)
        {
        if (h -> str == NULL)
                printf("[%d] %s\n", 0, "(nil)");
        else
                printf("[%u] %s\n", h ->len, h -> str);

        h = h -> next;
                        count++;
        }
        return (count);
}
