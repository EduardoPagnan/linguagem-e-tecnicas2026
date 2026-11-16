#include <stdio.h>

int main(void)
{
    double numero;

    printf("Digite um numero positivo: ");

    if (scanf("%lf", &numero) != 1) {
        printf("Erro: entrada invalida.\n");
        return 1;
    }

    if (numero > 0) {
        printf("\nNotacao cientifica: %e\n", numero);
    } else {
        printf("O numero deve ser maior que zero.\n");
    }

    return 0;
}
