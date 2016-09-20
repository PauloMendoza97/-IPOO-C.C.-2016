#include <stdio.h>

int fibo(int n)
{
    if (n==1 || n==2)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int num;
    printf("\tFIBONACCI\n");
    printf("Ingrese un numero: ");
    scanf("%d",&num);

    printf("\nLa serie de fibonacci con los %d primeros numeros es: %d",num,fibo(num));

    return 0;
}
