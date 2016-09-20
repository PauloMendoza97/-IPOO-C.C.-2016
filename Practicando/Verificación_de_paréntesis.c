#include <stdio.h>

void verificar(char m[])
{
    int i,cont=0;

    for(i=0;m[i]!='\0';i++)
    {
        if(m[i]=='(')
            ++cont;
        else if(m[i]==')')
            --cont;
    }
    if (cont==0)
        printf("Esta correctamente implementado");
    else
        printf("No esta correctamente implementado");
}

int main()
{
    char m[100]="(2(3-6(65(7((75(6(6+6)5))43)2)2))23";

    verificar(m);

    return 0;
}
