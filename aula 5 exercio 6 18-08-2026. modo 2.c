#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	/* Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.*/

		int n, sucessor, antecessor; 
	
	printf (" Entre com o vlaor de N:");
	scanf ("%d",&n);
	
	sucessor = n+1;
	antecessor = n-1;
		printf (" o numero %d, seu antecesso %d e seu sucessor %d",n, antecessor, sucessor );
	
/* 10) (URI 1013) Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido
da mensagem “eh o maior”. Utilize a fórmula:*/

	
	int a ,b,c , maiorTemp, maior;
	
	printf("\nInsira tres valores para identificar o maior:");
	scanf ("%d %d %d,", &a, &b ,&c );
	
	maiorTemp = ((a+b+abs(a-b))/2);
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	
	printf ("o Maior entre |%d| |%d| |%d| = %d", a, b, c, maior  );
	
	
	
	 /*3 Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares*/

	float real, dolar, cotacao;
	
	printf (" Insira o valor em R$:");
	scanf ("%f", &real);
	
	printf ("Insira o valor do dolar");
	scanf ("%f", &dolar);
	
	cotacao= real/dolar;
	
	printf ("conversao em real %f= %f , convertida em dolar %f", real, dolar, cotacao);


		return 0;
		
		
		
		

}

