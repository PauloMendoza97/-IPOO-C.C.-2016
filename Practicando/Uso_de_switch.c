#include <stdio.h>

//Averiguar la talla de la persona en ropa
int main(){
   char talla;


   printf("Ingrese su talla en ropa: ");
   scanf("%c",&talla);

   switch(talla)
   {
        case('l'):
                printf("su talla es L, no hay disponibles");
                break;
        case('m'):
                printf("su talla es M, si hay disponibles");
                break;
        case('s'):
                printf("su talla es S, no hay disponibles");
                break;
        case('x'):
                printf("su talla es X, si hay disponibles");
                break;
         default:
               printf("Debe ingresar l,m,s ó x.")
               break;
    }
    return 0;
}
