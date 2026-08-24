#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a, b, c, maior_temp, maior;
	
	printf ("Insira os valores de A, B, C:");
	scanf ("%d %d %d", &a, &b, &c);
	
	if (a<b) {
		maior_temp =b;
	} else{
		maior_temp = a;		
	}
	printf ("\n%d eh o Maior_temp", maior_temp);
	
	if(maior_temp<c){
		maior= c;
	} else {
		maior = maior_temp;
	}
	
		printf ("\n%d eh o Maior", maior);
	
	
	
	

	
	printf ("\nInsira os valores de A, B, C:");
	scanf ("%d %d %d", &a, &b, &c);
	
	if (a>b && a>c) {
		printf("\n%d eh o maior\n",a);
	} 
	if (b>a && b>c) {
		printf("\n%d eh o maior\n",b);
	} 		
	if (c>a && c>b) {
		printf("\n%d eh o maior\n",c);
    }
	
		
	
	
	return 0;
}
