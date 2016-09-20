#include <stdio.h>
#include <stdlib.h>
//"~ ":  el resultado es 1 si el operando es 0 y es 0 si el operando es 1.
int main()
{

    int a,c;
    a = 74;       // 0 1 0 0 1 0 1 0
    // ~a            1 0 1 1 0 1 0 1
    c = ~a+1;     // 1 0 1 1 0 1 1 0 (COMPLEMENTO A 2)

    printf(" NOT:\n\n %d",c);  //RESULTADO c=181
}

