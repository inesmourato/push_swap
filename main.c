#include "push_swap.h"

int main(int argc, char **argv)
{
        t_stack_node    *a;
        t_stack_node    *b;

        a = NULL;
        b = NULL;

        if(argc < 2 || (argc == 2 && argv[1][0]))
                return (1);
        else if(argc == 2)
                argv = ft_split(argv[1], ' ');
        init_stack_a();
        if(!stack_sorted(a))
        {
                if(stack_len(a) == 2)
                        swap numbers;
                else if(stack_len == 3)
                        sort_three algorithm;
                else
                        turk algorithm;
                
        }
        free_stack();
        return(0);
}