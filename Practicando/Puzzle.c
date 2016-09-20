#include <stdio.h>

int main(){
    char s[20]="a_la_mierda_mi_vida";;
    int c,i,j;

    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
        printf("Caracter 1 es %c y caracter 2 es %c\n",s[i],c);
    }
    return 0;
}
