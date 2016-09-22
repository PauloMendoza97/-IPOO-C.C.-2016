//Modificar ATOI con punteros
#include <stdio.h>
/*atoi: convierte s en entero*/

int atoi(char *s)
{
    int numero=0;
    while(*s!='\0'&&*s>='0'&&*s<='9')
    {
        numero = numero*10+(*s-'0');
        s++;
    }
    return numero;
}

int main()
{
    char l[40]="3768";
    printf("%d", atoi(l));
}
