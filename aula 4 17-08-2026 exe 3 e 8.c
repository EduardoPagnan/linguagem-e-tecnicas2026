#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	
	int n, bit64, bit32, bit16, bit08, bit04, bit02, resultado ;
	
	printf ( " Entre com o valor de N:" );
	scanf ("%d", &n); /* e comercial é o endereço da varialvel n */
	
	
	bit64 = n%2;
	resultado = n/2;
		
	bit32 = resultado%2;
	resultado =resultado/2;
		
	bit16 = resultado%2;
	resultado =resultado/2;
	
	bit08 = resultado%2;
	resultado = resultado/2;
	
	bit04 = resultado%2;
	resultado = resultado/2;
	
	bit02 = resultado%2;
	resultado = resultado/2;
	
	printf(" o numero %d em bilario = %d%d%d%d%d%d%d", n ,resultado%2, bit02, bit04, bit08, bit16, bit32, bit64);
	
	
	
	
	
	int x1, x2, y1, y2;
	float dist, cat1, cat2;
	
	printf( "entre com os valores de p1(x1,y1')");
	scanf ("%d", &x1);
	scanf ("%d", &y1);
	
	printf( "entre com os valores de p2(x2,y2')");
	scanf ("%d", &x2);
	scanf ("%d", &y2);
	
	
	cat1= pow((x2-x1), 2);
	cat2= pow((y1-y1), 2);
	
	dist = sqrt(cat1 + cat2);
	printf("Distancia: %f",dist);
	
		
	return 0;
}
