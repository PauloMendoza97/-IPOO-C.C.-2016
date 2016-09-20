#include <stdio.h>
#include <stdlib.h>
//"^ ":  el resultado es 1 si los dos operandos son diferentes. En caso contrario 0.
int main()
{

    int a,b,c;
    a = 74;       // 0 1 0 0 1 0 1 0
    b = 174;      // 1 0 1 0 1 1 1 0
    c = a ^ b;    // 1 1 1 0 0 1 0 0

    printf(" XOR:\n\n74 & 174 = %d",c);  //RESULTADO c=228
}
