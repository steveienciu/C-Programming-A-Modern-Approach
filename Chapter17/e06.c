/* modify delete_from_list function from test.c so it uses only one pointer */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value; /* data stored in the node */
    struct node *next; /* pointer to the next node */
};

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur;

    cur = list;
    while(true) {
        if (cur == NULL) { /* n was not found */
            return list;
        }
        if (cur == list && cur->value == n) { /* n is in the first node */
            list = list->next;
            free(cur);
            break;
        }
        if (cur != NULL && cur->next->value == n) { /* n is in another node */
            cur->next = cur->next->next; /* memory leak? */
            break;
        }
        cur = cur->next;
    }

    return list;
}
