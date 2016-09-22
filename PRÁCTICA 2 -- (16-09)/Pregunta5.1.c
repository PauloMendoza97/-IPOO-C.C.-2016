//Modificar GETLINE con punteros
#include <stdio.h>

int getline(char *line, int *maxline);
void copy(char *to, char *from);
/* imprime la l�nea de entrada m�s larga */
int main( )
{
    int MAXLINE =1000;
    int len; /* longitud actual de la l�nea */
    int max; /* m�xima longitud vista hasta el momento */
    char line[MAXLINE]; /* l�nea de entrada actual */
    char longest[MAXLINE]; /* la l�nea m�s larga se guarda aqu� */

    max = 0;
    while ((len = getline(line, &MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max >0) /* hubo una l�nea */
        printf("%s", longest);
    return 0;
}
/* getline: lee una l�nea en s, regresa su longitud */
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
