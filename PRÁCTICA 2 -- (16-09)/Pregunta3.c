/*5.4:  Escriba la función strend(s,t), que regresa 1 si la cadena t se presenta al final de la cadena s, y cero si no es así.*/
#include <stdio.h>

int strend(char *s, char *t)
{
    int cont=0;
    while(*s!='\0')
        s++;
    while(*t!='\0')
    {
        t++;
        cont++;
    }
    while(cont>=0)
    {
        if(*s==*t)
        {
            cont--;
            s--;
            t--;
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    char x[15]="HolaMundoXD",y[15]="undoXD";
    strend(x,y);
}
