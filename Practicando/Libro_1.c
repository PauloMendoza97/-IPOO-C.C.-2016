#include <stdio.h>

void convertir(char m[],int l)
{
    int i;
    char x[50];

    for(i=0;i<l;i++)
    {
        if(m[i]>='A' && m[i]<='Z')
            m[i]=m[i]+'a'-'A';
    }
}

int main()
{
    char texto[15]="HoLA MuNDo.";
    int cant=11;
    convertir(texto,cant);

    printf("El nuevo texto es  %s  ...",texto);
    return 0;
}
