//Escriba una función recursiva que reciba un string y devuelva el string invertido (sin utilizar la libreria string.h).
#include <stdio.h>

int longitud(char m[])
{
    int i=0;
    while(m[i]!='\0')
        i++;
    return (i-1);
}

void invertir (char x[], int min, int max)
{
    char temp;
    if(max-min>=0)
    {
        temp=x[min];
        x[min]=x[max];
        x[max]=temp;
        invertir(x,++min,--max);
    }
}

int main()
{
    char l[30]="Hola Mundo.";
    invertir(l,0,longitud(l));
    printf("%s",l);
}

