#include <stdio.h>

int promedio(int *p, int n)
{
    int temp=0;
    int cont=0;
    int i;
    for(i=0;i<n;i++)
    {
        temp+=*p;
        cont++;
        p++;
    }
    return temp/cont;
}

int main()
{
    int l[7]={3,4};
    printf("Promedio de lo numeros: %d\n",promedio(l,2));
}
