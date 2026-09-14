#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	


    float preco, vp, ppv;

    printf("Digite o preco da acao: R$ ");
    scanf("%f", &preco);

    printf("Digite o valor patrimonial (VP): R$ ");
    scanf("%f", &vp);

       ppv = vp / (preco * 100);

   

    if (preco > 10 && ppv > 0.5) {
        printf("Recomendacao: otima/ compre\n");
    }
    else if (preco < 1 && ppv > 1.0) {
        printf("Recomendacao: regular\n");
    }
    else if (preco > 5 && ppv > 1.2) {
        printf("Recomendacao: RUIM / NAO COMPRE\n");
    }
    else if (preco < 10 && ppv > 0.3) {
        printf("Recomendacao: OPORTUNIDADE\n");
    }
    else if (preco > 1 && ppv < 0.7) {
        printf("Recomendacao: ATENCAO\n");
    }
    else {
    	printf ("invalido");
    }

	
	
	return 0;
}
