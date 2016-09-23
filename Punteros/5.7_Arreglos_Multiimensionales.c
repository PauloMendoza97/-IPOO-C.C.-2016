#include <stdio.h>
static char daytab[2][13] = { {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                              {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, };

/* day_o£_year: obtiene día del año a partir de mes y año */
int day_of_year(int year, int month, int day)
{
    int i, leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for (i = 1; i < month; i++ )
        day += daytab[leap][i];
    return day;
}

/* month_day: obtiene mes, y dia a partir de día del año */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab [leap][i];
    *pmonth = i;
    *pday = yearday;
}

int main()
{
    printf("%i", day_of_year(2016,9,23));
    int mes,dia;
    month_day(2016,256,&mes,&dia);

    printf("\n\nMES: %d\nDIA: %d",mes,dia);
}

