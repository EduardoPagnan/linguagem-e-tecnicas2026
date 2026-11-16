	#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1[10], y1[10], x2[10], y2[10];
    double distancia, diferencaX, diferencaY;
    int i;

    /* Leitura das coordenadas */
    for (i = 0; i < 10; i++) {
        printf("\nPar de pontos %d:\n", i + 1);

        printf("Digite x1 e y1: ");
        if (scanf("%lf %lf", &x1[i], &y1[i]) != 2) {
            printf("Entrada invalida.\n");
            return 1;
        }

        printf("Digite x2 e y2: ");
        if (scanf("%lf %lf", &x2[i], &y2[i]) != 2) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    /* Calculo e exibicao das distancias */
    printf("\nDISTANCIAS ENTRE OS PONTOS:\n");

    for (i = 0; i < 10; i++) {
        diferencaX = x2[i] - x1[i];
        diferencaY = y2[i] - y1[i];

        distancia = sqrt(diferencaX * diferencaX
                       + diferencaY * diferencaY);

        printf("Par %d: distancia = %.2f\n", i + 1, distancia);
    }

    return 0;
}
