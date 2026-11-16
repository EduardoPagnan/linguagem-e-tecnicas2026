#include <stdio.h>

#define QUANTIDADE 10
//Faça um programa que leia 100 números inteiros e depois os imprima na ordem inversa em que eles foram lidos, e ordenados do maior para o menor
int main(void)
{
    int numeros[QUANTIDADE];
    int i, j, auxiliar;

    /* Leitura dos numeros */
    for (i = 0; i < QUANTIDADE; i++) {
        printf("Digite o numero %d de %d: ", i + 1, QUANTIDADE);

        if (scanf("%d", &numeros[i]) != 1) {
            printf("Erro: digite apenas numeros inteiros.\n");
            return 1;
        }
    }

    /* Mostrar na ordem inversa da leitura */
    printf("\nORDEM INVERSA DA LEITURA:\n");

    for (i = QUANTIDADE - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    /* Ordenar do maior para o menor */
    for (i = 0; i < QUANTIDADE - 1; i++) {
        for (j = i + 1; j < QUANTIDADE; j++) {
            if (numeros[j] > numeros[i]) {
                auxiliar = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = auxiliar;
            }
        }
    }

    printf("\n\nORDEM DO MAIOR PARA O MENOR:\n");

    for (i = 0; i < QUANTIDADE; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");


    return 0;
}
