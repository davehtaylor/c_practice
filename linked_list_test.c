#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node *next;
};

void
print_list(struct node *first)
{
    struct node *current = first;

    while (current != NULL)
    {
        printf("%d\n", current->i);
        current = current->next;
    }
}

void
free_list_memory(struct node *first)
{
    struct node *current = first;

    while (current != NULL)
    {
        free(current);
        current = current->next;
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
