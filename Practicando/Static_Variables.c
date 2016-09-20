#include <stdio.h>
int i=4;
/*
void increment()
{
    static int i=0;
    i++;
    printf("%d",i);
}

int main()
{
    increment();
    increment();
    increment();

    return 0;
}*/

void compute()
{
    static int i=0;
    for(;i<3;i++)
        printf("%d\n",i);
}

int main()
{
   while(i--)
        compute();
   printf("%d\n",i);

   return 0;
}
