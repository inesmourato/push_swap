#include "push_swap.h"

void turk_algorithm (t_stack_node **stack_a, t_stack_node **stack_b)
{
        int counter;
        int size;

        size = ft_lstsize(*stack_a);

      while(size > 3)
      {
        push_b(&stack_a, &stack_b);
        size--;
        push_b(&stack_a, &stack_b);
        size--;
        
        counter = 0;
        target_node(&stack_a, stack_b);
      }  
      e
}









/*
[]if the pushing number is either MAX ot MIN it should be placed above the old biggest number

[]make the rrr and rr functions

start:
[] condition: it will push numbers until there are only 3 nodes in stack a (if it has 4 nodes only pushes once)

[] push 2 numbers from the top of stack_a to stack_b

[] initiate a counter of moves 

[] during each push, b is sorted in descending order 
       
[] find the target node (closest smaller number to the A node)
        [] if there isn't a smaller number, then the target node is the MAX in B
        [] closest smaller = nbrA > nbrB && (nbrA_x - nbrB_x) < (nbrA_y - nbrB_y)

[] find which one is the cheapest
        [] cost is: sum of counter to bring a to the top in A + counter to bring target node to the top in B
        [] when sum is 0 push it immediately
        [] compare results, do the first cheapest

[]when stack a has 3 nodes 
        []sort3 fucntion
        [] push every B node to A
                [] but in stack a, the top number should be the closest bigger number 


*/