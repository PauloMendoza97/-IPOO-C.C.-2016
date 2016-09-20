#include <stdio.h>

/*void cambio(float z)
{
    z=z/2;
    printf("La mitad del numero es: %.2f\n",z);
}

int main()
{
    float z=9;
    cambio(z);

    printf("La mitad del numero es: %.2f\n",z);
   // printf("2.La mitad del numero es: %.2f",z);

    return 0;
}
*/

int longitud(char m[])
{
    int i,cont=0;

    for(i=0;m[i]!='\0';i++)
        ++cont;
    return cont;
}

int main()
{
    char cadena[100]="Trata j o o o o";
    printf("La longitud de la cadena es: %d",longitud(cadena));

    return 0;
}


