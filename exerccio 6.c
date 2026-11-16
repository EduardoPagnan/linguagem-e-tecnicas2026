#include <stdio.h>

int main(void)
{
    int numeros[10];
    int i, encontrou;

    encontrou = 0;

    /* Leitura do vetor */
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d de 10: ", i + 1);

        if (scanf("%d", &numeros[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("\nSequencias consecutivas encontradas:\n");

    /* Verificar as posicoes vizinhas */
    for (i = 0; i < 9; i++) {
        if ((long long)numeros[i + 1] == (long long)numeros[i] + 1) {
            encontrou = 1;

            printf("%d", numeros[i]);

            while (i < 9 &&
                   (long long)numeros[i + 1] == (long long)numeros[i] + 1) {
                i++;
                printf(" %d", numeros[i]);
            }

            printf("\n");
        }
    }

    if (encontrou == 0) {
        printf("Nenhuma sequencia consecutiva encontrada.\n");
    }

    return 0;
}

