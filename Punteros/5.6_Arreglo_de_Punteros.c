#include <stdio.h>
#include <string.h>
#define MAXLINES 5000 /* máx # de líneas por ordenar */
char *lineptr[MAXLINES]; /* apuntadores a líneas de texto */

int readlines(char *lineptr[ ], int nlines); /* readlines: lee líneas de entrada */
void writelines(char *lineptr[ ], int nlines); /* writelines: escribe líneas de salida */
void qsort(char *lineptr[ ], int left, int right); /*qsort: ordena v[left]...v[right] en orden ascendente*/

/* ordena líneas de entrada */
int main( )
{
    int nlines; /* número de líneas de entrada leídas */
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    }
    else
    {
        printf("error: entrada demasiado grande para ordenarla\n");
        return 1;
    }
}

#define MAXLEN 1000 /* máx longitud de cualquier línea de entrada*/

int getline(char *, int);/* getline: lee una línea en s, regresa su longitud */
char *malloc(int);
void swap(char*v[],int i,int j); /*swap: intercambia v[i] y v[j]*/

/* readlines: lee líneas de entrada */
int readlines(char *lineptr[ ], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];
    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
    {
        if (nlines >= maxlines || (p = malloc(len)) == NULL)
            return -1;
        else
        {
            line[len-1] = '\0'; /* elimina carácter nueva línea */
            strcpy(p, line);
            lineptr [nlines ++ ] = p;
        }
    }
    return nlines;
}

/* writelines: escribe líneas de salida */
void writelines(char *lineptr[ ], int nlines)
{
    int i;
    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}

/* getline: lee una línea en s, regresa su longitud */
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i<lim-1 && (c = getchar( )) !=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


void qsort(char *v[], int left, int right)
{
    int i,last;
    void swap(char*v[], int i, int j);

    if(left>=right) /*No hace nada si el arreglo contiene menos de 2 elementos*/
        return;
    swap(v,left,(left+right)/2);
    last=left;
    for(i=left+1;i<=right;i++)
        if(strcmp(v[i],v[left])<0)
           swap(v,++last,i);
    swap(v,left,last);
    qsort(v,left,last-1);
    qsort(v,last+1,right);
}

/*swap: intercambia v[i] y v[j]*/
void swap(char*v[],int i,int j)
{
    char *temp;
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
