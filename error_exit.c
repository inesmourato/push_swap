#include "push_swap.h"

void error_exit(void) 
{
   write(2, "error\n", 6);
   exit(0);
}