#include <stdio.h>

int main ()
{
    int **q[3][3] = {{2,2,2},{2,2,2},{2,2,2}};
    int **y[3][3] = {{3,3,3},{3,3,3},{3,3,3}};
    int **t[3][3];
    int **r[3][3];

    int temp=3;
    int h = 0;

    //inicio se saca la transpuesta
    while(h<temp){
        int j = 0;
        while(j<temp){
            *(*(t+j)+h)=*(*(y+h)+j);
            ++j;
        }
        ++h;
    }

    //Inicio Se multiplica la Matriz por la transpueta
    h=0;
    while(h<temp){
        int j = 0;
        while(j<temp){
            int t2 = *(*(t+h)+j);
            int q2 = *(*(q+h)+j);
            *(*(r+h)+j)= t2*q2;
            ++j;
        }
        ++h;
    }

    //Se imprimen los resultados
    h=0;
    printf("%s\n","La multiplicacion de la matríz es: \n");
    while(h<temp){
        int j = 0;
        while(j<temp){
            printf("%d%c",*(*(r+h)+j),' ');
            ++j;
        }
        printf("\n");
        ++h;
    }
}
