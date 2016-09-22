    //Modificar STRINDEX con punteros
#include <stdio.h>


int getline(char *line, int* max);
int strindex(char *source ,char *searchfor);

char pattem [ ] = "ould"; /* patrón por buscar */

/*encuentra todas las líneas que coincidan con el patrón */
int main ( )
{
    int MAXLINE=1000;
    char line[MAXLINE];
    int found = 0;
    while (getline(line, &MAXLINE) > 0)
        if (strindex(line, pattem) >= 0)
        {
            printf("%s", line);
            found ++;
        }
    return found;
}

/* getline: trae línea y la pone en s, regresa su longitud */
int getline(char *s, int *lim)
{
    int c, i;
    i = 0;
    while ((*lim * -1) > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}
/* strindex: regresa el índice de t en s,-l si no existe */
int strindex(char *s ,char *t)
{
    int i, j, k;
    for (i = 0; s[i] != '\0';i++)
    {
        for (j = i, k = 0; t[k]!= '\0' && s[j]==t[k]; j++, k++)
            ;
        if(k>0 && t[k] =='\0')
            return i;
    }
    return -1;
}


