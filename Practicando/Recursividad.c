#include <stdio.h>
/*
int suma(int a[],int l)
{
    int i,cont=0;
    for(i=0;i<l;i++)
        cont+=a[i];
    return cont;
}

int main()
{
    int x=13,cad[13]={1,1,1,1,1,1,1,1,1,1,1,1,1};

    printf("Suma de los elementos de la cadena es: %d",suma(cad,x));
}*/

int suma(int a[],int l)
{
   if(l>0)
   {
       int result;
       result=suma(a,l-1);
       result+=a[l-1];
       return result;
   }
   else return 0;
}

int main()
{
    int x=13,cad[13]={1,1,1,1,1,1,1,1,1,1,1,1,1};

    printf("Suma de los elementos de la cadena es: %d",suma(cad,x));
}

/*
int suma(int a[],int l)
{
   if(l==0)
    return 0;
   return suma(a,l-1) + a[l-1];
}

int main()
{
    int x=13,cad[13]={1,1,1,1,1,1,1,1,1,1,1,1,1};

    printf("Suma de los elementos de la cadena es: %d",suma(cad,x));
}
*/

