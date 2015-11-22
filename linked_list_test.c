#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node *next;
};

void
print_list(struct node *first)
{
    while (first != NULL)
    {
        printf("%d\n", first->i);
        first = first->next;
    }
}

void
free_list_memory(struct node *first)
{
    struct node *current;

    while (first != NULL)
    {
        current = first;
        first = first->next;
        free(current);
    }
}

int
main(void)
{
    struct node *first = NULL;
    first = malloc(sizeof(struct node));
    
    first->i = 10;
    first->next = NULL;
    
    first->next = malloc(sizeof(struct node));

    first->next->i = 11;
    first->next->next = NULL;

    print_list(first);

    free_list_memory(first);

    return 0;
}
