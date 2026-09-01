#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sucessor, antecessor;
	
	printf ("insira um número:");
	scanf ("%d", &n);
	
	sucessor = n+1;
	antecessor = n-1;
	
	printf ("o número %d, seu antecessor %d, sucessor %d", n, antecessor, sucessor);
	

	 /*exercio 01 */
	int idade, anodenascimento, anoatual;
	printf("insira sua idade");
	scanf("%d", &idade);
	
	printf("Insira o ano atual: ");
	scanf("%d", &anoatual);
	
	anodenascimento= anoatual - idade;
	
	printf ("ano de nascimento %d", anodenascimento);
	
	
	/* exercicio 02 Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por
segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s. */
	
	float k, m;
	
	printf("Insira a velocidade km/h:");
	scanf("%f",&k);
	
	m= k/36;
	
	printf ("A velocidade metro por segundo: %f", m);
	
		/* exercicio 03 Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares. */

	float reais, dolar, cotacao;
	
	printf ("INSIRA O VALOR EM REAIS:");
	scanf ("%f",&reais);
	
	printf ("INSIRA A COTAÇÃO DO DOLAR:");
	scanf ("%f", &dolar);
	
	cotacao=reais/dolar;
	
	printf ("Cotação do dolar hoje: %f", cotacao);
	

return 0;	
}
