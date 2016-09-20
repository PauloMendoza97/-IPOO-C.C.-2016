#include <stdio.h>
#include <stdlib.h>
//"<<n": el resultado es el operando con todos los bits desplazados a la izquierda por n posiciones.
int main()
{

    int a,c;
    a = 74;       // 0 1 0 0 1 0 1 0
    c = a<<2;     // 0 0 1 0 1 0 0 0

    printf(" SHIFT hacia la izquierda:\n\n74<<2 = %d",c);  //RESULTADO c=296
}
