/* 5.3: Escriba una versión con apuntadores de la función strcat que se muestra en el capítulo 2: strcat(s,t) copia la cadena t al final de s. */
#include <stdio.h>

void strcat(char *m, char *n)
{
    int i=0;
    while (*m != '\0') /* encuentra el fin de s */
        m++;
    while (( *m=*n) != '\0')/* copia t */
    {
        m++;
        n++;
    }
}

int main()
{
    char x[10]="hola.",y[10]="mundo";
    strcat(x,y);

    int i;
    printf("%s",x);

}
