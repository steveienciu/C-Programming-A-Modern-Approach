/* create function that returns number of times n appeared in list */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value; /* data stored in the node */
    struct node *next; /* pointer to the next node */
};

struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);
int count_occurrences(struct node *list, int n);

int main(void)
{
    struct node *list;
    int counter, n;

    list = read_numbers();

    printf("Enter a number: ");
    scanf("%d", &n);
    counter = count_occurrences(list, n);
    printf("The number %d appeared %d time(s)\n", n, counter);

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

int count_occurrences(struct node *list, int n)
{
    int counter = 0;
    
    for (; list != NULL; list = list->next) {
        if (list->value == n) {
            ++counter;
        }
    }

    return counter;
}
