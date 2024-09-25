#include "push_swap.h"

int main(int argc, char **argv)
{
        t_stack_node    *a;
        //t_stack_node    *b;

        a = NULL;
        //b = NULL;
        if(argc < 2 || (argc == 2 && !argv[1][0]))
                return (1);
        else if(argc == 2)
              argv = ft_split_ps(&argv[1], ' ');
        init_stack_a(&a, argv);
        print_stack(a);
        if(!stack_is_sorted(a))
                printf("yes");
        else
                printf("no");
        if(!stack_is_sorted(a))
        {
                if(ft_lstsize(a) == 2)
                        swap numbers;
                else if(stack_len == 3)
                        sort_three algorithm;
                else
                        turk algorithm;
                
        }
        free_stack();*/
        return(0);
}


/*

[X]declare pointers 	printf("append to stack feito");
to 2 linked lists (stack a and b)
        [X]set both pointers to NULL to avoid undefined behaviour and indicate im starting with empty stacks

[x] handle input count errors. Argc must be 2 or more and second input must not be empty
        [x]if input erros, return error

[x] handle both cases of input (numbers & strings)
        [x]if input is a string, call split to split the substrings

[] initialize stack a by appending each input number as a node to stack a
        [] handle int overflow, duplicates and syntax errors (only contains digits, '-', '+')
                [] if errors found, free stack a and return error
        [] check for each input, if it's a long integer
                [] if input is a string convert it to a long int
        [] append the nodes to satck a

[] check if stack a is sorted
        [] if not, implement the algorithm
                [] check for 2 numbers
                        [] if so, swap 
                [] check for 3 numbers
                        []if so, implement 'sort three' algorithm
                [] check if more than 3 numbers
                        [] if so, implement the Turk Algorithm



util functions:
- to handle errors
- operations
- stack lenght
- last node
- min and max nodes


*/