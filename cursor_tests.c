// ... existing code ...

if (argc == 2)
    argv = ft_split(argv[1], ' ');
init_stack_a(&a, argv, argc);
if (!stack_sorted(a))
{
    // ... existing code ...
}

// ... existing code ...



#include "push_swap.h"
#include <limits.h>

static int is_valid_integer(const char *str)
{
    long num;
    char *endptr;

    num = strtol(str, &endptr, 10);
    if (*endptr != '\0')
        return 0;
    if (num < INT_MIN || num > INT_MAX)
        return 0;
    return 1;
}

static int has_duplicates(t_stack_node *stack, int value)
{
    t_stack_node *current;

    current = stack;
    while (current != NULL)
    {
        if (current->value == value)
            return 1;
        current = current->next;
    }
    return 0;
}

void init_stack_a(t_stack_node **a, char **argv, int argc)
{
    int i;
    long num;
    t_stack_node *new_node;
    t_stack_node *last;

    i = 1;
    while (i < argc)
    {
        if (!is_valid_integer(argv[i]))
        {
            // Handle error: not a valid integer
            free_stack(a);
            exit(1);
        }

        num = strtol(argv[i], NULL, 10);
        
        if (has_duplicates(*a, (int)num))
        {
            // Handle error: duplicate value
            free_stack(a);
            exit(1);
        }

        new_node = malloc(sizeof(t_stack_node));
        if (new_node == NULL)
        {
            // Handle error: memory allocation failed
            free_stack(a);
            exit(1);
        }

        new_node->value = (int)num;
        new_node->next = NULL;
        new_node->prev = NULL;

        if (*a == NULL)
        {
            *a = new_node;
        }
        else
        {
            last = *a;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = new_node;
            new_node->prev = last;
        }

        i++;
    }
}