//Modificar GETLINE con punteros
#include <stdio.h>

int getline(char *line, int *maxline);
void copy(char *to, char *from);
/* imprime la línea de entrada más larga */
int main( )
{
    int MAXLINE =1000;
    int len; /* longitud actual de la línea */
    int max; /* máxima longitud vista hasta el momento */
    char line[MAXLINE]; /* línea de entrada actual */
    char longest[MAXLINE]; /* la línea más larga se guarda aquí */

    max = 0;
    while ((len = getline(line, &MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max >0) /* hubo una línea */
        printf("%s", longest);
    return 0;
}
/* getline: lee una línea en s, regresa su longitud */
int getline(char *s, int *lim)
{
    int c,cont=0,i;

    for (i = 0; i<*lim-1 && (c = getchar( )) !=EOF && c!='\n'; ++i)
    {
        *s = c;
        s++;
        cont++;
    }
    if (c == '\n')
    {
        *s = c;
        s++;
        cont++;
    }
    *s = '\0';
    return cont++;
}
/* copy: copia 'from' en 'to'; supone que to es suficientemente grande */
void copy(char *to, char *from)
{
    while ((*to = *from) != '\0')
    {
        to++;
        from++;
    }
}
