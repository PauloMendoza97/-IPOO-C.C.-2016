#include <stdio.h>
//Potencia de 2 con &
int main(){

	int x;

	printf("Ingrese un numero: ");
	scanf("%d", &x);

	if( x==0 )
	 	printf("El numero no es potencia de 2.\n");

    	else if((x&(x-1)) == 0)
	 	printf("El numero es potencia de 2.\n");

    	else
        	printf("El numero no es potencia de 2.\n");

	return 0;

}
