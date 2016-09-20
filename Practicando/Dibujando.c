#include <stdio.h>
#define MAX  1000

void dibujar(char c[], int b, int h)
{
    int i,j,k;
    for(i=0;i<h;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;c[k]!='\0';k++)
                printf("%c",c[k]);
            printf(",");
        }
        printf("\n");
    }
}

int main()
{
    int i=0,s,b,h;
    char c[MAX];
    printf("Ingrese la base: ");
    scanf("%d",&b);
    printf("Ingrese la altura: ");
    scanf("%d",&h);
    printf("Ingrese un caracter o una cadena: ");
    scanf("%s",c);

    dibujar(c,b,h);
}
