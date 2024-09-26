#include <stdio.h>

void change_pointer(int *i)
{
        i = 2;
}

int main()
{
        int i = 0;


        printf("antes da funcao %d\n", i);
        change_pointer(&i);
        printf("dzepois da funcao %d\n", i);
}