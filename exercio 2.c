#include <stdio.h>

int main(void)
{
    double numero;

    printf("Digite um numero positivo: ");

    if (scanf("%lf", &numero) != 1) {
        printf("Erro: valor invalido.\n");
        return 1;
    }

    if (numero <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }

    printf("\nNumero digitado: %g\n", numero);
    printf("Notacao cientifica: %e\n", numero);

    return 0;
}
