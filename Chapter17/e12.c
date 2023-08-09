/* write function that points to the last user defined number */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value; /* data stored in the node */
    struct node *next; /* pointer to the next node */
};

struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);
struct node *find_last(struct node *list, int n);

int main(void)
{
    struct node *list;
    int n;

    list = read_numbers();

    printf("Please enter a number: ");
    scanf("%d", &n);

    list = find_last(list, n);

    if (!list) {
        printf("The number is node found in the list\n");
    }
    else {
        printf("The address of the last node that contains %d is %p\n", list->value, list);
    }

    return 0;
}

struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(0);
    }

    new_node->next = list;
    new_node->value = n;

    return new_node;
}

struct node *read_numbers(void)
{
    struct node *first = NULL;
    int n;

    printf("\nEnter a series of integers (0 to terminate): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0) {
            return first;
        }
        first = add_to_list(first, n);
    }
}

struct node *find_last(struct node *list, int n)
{
    int flag = 0;
    struct node *last;

    for (; list != NULL; list = list->next) {
        if (n == list->value) {
            last = list;
            ++flag;
        }
    }

    if (flag == 0) {
        return NULL;
    }
    else {
        return last;
    }
}
