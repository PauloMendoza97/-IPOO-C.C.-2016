/* month_name: regresa el nombre del n-ésimo mes */
#include <stdio.h>
char *month_name(int n)
{
    static char *name[ ] = { "Mes ilegal", "Enero", "Febrero", "Marzo", "Abril",
    "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    return (n<1||n>12)?name[0]:name[n];
}

int main()
{
    printf("%s",month_name(5));
}
