#include <stdio.h>
#include <stdlib.h>

int main()
{
    int espacios=0,otros=0,enter=0;
    int i,c,digito[9];

    for(i=0;i<9;i++)
        digito[i]=0;

    while((c=getchar())!=EOF)
    {
        if(c>='0' && c<='9')
            ++digito[c-'0'];
        else if(c==' ' || c=='\n' || c=='\t')
            ++espacios;
        else
            ++otros;

    }

    printf("DIGITOS=");
    for(i=0;i<9;i++)
        printf("%d ",digito[i]);
    printf(" , ESPACIOS=%d , OTROS=%d",espacios,otros);
    return 0;
}
