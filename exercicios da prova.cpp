#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	
	
			// exercio 0 da prova
			
	int qtd_tot, max, n_mochilas, resto;
	
		
	printf (" Insira a quantidade de itens e a capacidade da mochila:\n");
	scanf (" %d %d", &qtd_tot , &max );
	
	n_mochilas = qtd_tot/max;
	resto= qtd_tot%max;
	
	printf (" São %d mochilas e resto %d iten\n", n_mochilas, resto );
	
	
	// exercio 1 da prova
	
	int a, b, c, aux;
	
	printf (" Insira a, b, c:\n");
	scanf (" %d %d %d", &a, &b, &c);
	
	if ( a!=b && b!=c && c!=a ){
		if (a>b) {
			aux=a;
			a=b;
			b=a;
		} else if (b>c){
			aux=b;
			b=c;
			c=aux;
		}
	printf (" Os valores em ordem sao %d %d %d", a, b, c);

	} 	else printf (" numeros tem que serem distintos\n");
	
	
		// exercio 2 da prova

	return 0;
}
