#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <unistd.h>
#include "libft/libft.h"

typedef struct s_stack_node
{
        int     nbr;
        int     index;
        int     cost;
        bool    above_median;
        bool    cheapest;
        struct  s_stack_node    *target_node;
        struct  s_stack_node    *next;
        struct  s_stack_node    *previous;       
}        t_stack_node;

//handle errors

//stack init

//nodes init

//stack utils

//commands

//algorithms

#endif