/* Escriba un programa que reciba un string de la forma "123.45e-6" y devuelva su correspondiete número.*/
#include <stdio.h>

float convertir(char m[])
{
    int i,j=1,lo1=0,lo2;
    float num1=0,num2=0;


    for(i=0;m[i]>='0'&&m[i]<='9';i++)
    {
        num1=10*num1+(m[i]-'0');
        lo1++;//3
    }
    lo1++;//4
    lo2=lo1;

    for(i=lo1;m[i]>='0'&&m[i]<='9';i++)
    {
        num2=10*num2+(m[i]-'0');
        j*=10;
        lo2++;//6
    }
    num2=num1+(num2/j);//num2 tiene el numero digital
    lo2++;//7
    num1=0;

    for(i=lo2+1;m[i]>='0'&&m[i]<='9';i++)
        num1=10*num1+(m[i]-'0');//obtiene el valor exponencial
    j=1;
    if(m[lo2]=='-')
    {
        for(i=0;i<num1;i++)
            j*=10;
        return num2/j;
    }
    else if(m[lo2]=='+')
    {
        for(i=0;i<num1;i++)
            j*=10;
        return num2*j;
    }
}

int main()
{
    char x[30]="123.45e-6";
    printf("Numero: %.10f",convertir(x));
}

