#include "push_swap.h"

long ft_atol (const char *str)
{
    long result;
    int i;
    int sign;

    result = 0;
    i = 0;
    sign = 1;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        if(result * sign > INT_MAX || result * sign < INT_MIN)
        {
                error_exit();
        }
        
        i++;
    }
    return(result * sign);
}