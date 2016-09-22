//Modificar ITOA con punteros
#include <stdio.h>
/* itoa: convierte n a caracteres en s */
void reverse(char *s)
{
    int c,i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}

void itoa(int *n, char *s)
{
    int i, sign;

    if ((sign = *n) < 0) /* registra el signo */
        *n = *n * -1; /* vuelve a n positivo */
    i = 0;
    do { /* genera dígitos en orden inverso */
            s[i ++] = *n % 10 + '0'; /* toma el siguiente dígito */
    } while ((*n /= 10) > 0); /* bórralo */

    if (sign < 0)
        s[i++]='-';
    s[i] = '\0';
    reverse(s);
}

int main()
{
    int x=12345;
    char l[15];
    itoa(&x,l);
    printf("%s",l);
}
