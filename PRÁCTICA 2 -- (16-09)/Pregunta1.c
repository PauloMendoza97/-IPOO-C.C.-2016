/*Implementar una funci�n que convierta un caracter en min�scula*/
#include<stdio.h>

char convertir(char *m)
{
    if(*m>='A'&&*m<='Z')
        return *m+=32;
}

int main()
{
    char x='L';
    printf("%c",convertir(&x));
}

//Implementar una funci�n que convierta una cadena de caracteres en min�sculas.
/*void convertir(char *m)
{
    while(*m!='\0')
    {
        if(*m>='A'&&*m<='Z')
            *m+=32;
        m++;
    }
}

int main()
{
    char x[40]="HOLaMundO.";
    convertir(x);
    printf("%s",x);
}*/
