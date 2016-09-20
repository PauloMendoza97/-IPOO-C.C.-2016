/*Escriba una función lower, la cual convierte letras mayusculas a minusculas usando una condicional. No usar if-else.*/
#include <stdio.h>

void lower(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        while(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
            break;
        }
        i++;
    }
}

int main()
{
    char x[10]="HOlaMUndO";
    lower(x);
    printf("%s",x);

    return 0;
}
