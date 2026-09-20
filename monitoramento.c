#include <stdio.h>

void encerrarSistema() {
    printf("\n==============================\n");
    printf("      SISTEMA ENCERRADO\n");
    printf("==============================\n");
}

int main() {

    float temperatura;
    char unidade;
    int contador = 0;

    printf("=== Sistema de Monitoramento ===\n");

    while (1) {

        printf("\nDigite uma temperatura: ");

        if (scanf("%f", &temperatura) != 1) {
            printf("Entrada invalida. Por favor, digite um numero valido.\n");

            while (getchar() != '\n');

            continue;
        }

        printf("Digite a unidade de medida (C para Celsius, F para Fahrenheit, K para Kelvin): ");
        scanf(" %c", &unidade);

        if (unidade == 'C' || unidade == 'c') {

            if (temperatura < 0) {
                printf("Temperatura muito baixa!\n");
            }
            else if (temperatura <= 25) {
                printf("Temperatura normal.\n");
            }
            else if (temperatura <= 35) {
                printf("Temperatura alta!\n");
            }
            else {
                printf("Temperatura muito alta!\n");
            }
        }

        else if (unidade == 'F' || unidade == 'f') {

            temperatura = (temperatura - 32) * 5 / 9;

            if (temperatura < 0) {
                printf("Temperatura muito baixa!\n");
            }
            else if (temperatura <= 25) {
                printf("Temperatura normal.\n");
            }
            else if (temperatura <= 35) {
                printf("Temperatura alta!\n");
            }
            else {
                printf("Temperatura muito alta!\n");
            }
        }

        else if (unidade == 'K' || unidade == 'k') {

            temperatura = temperatura - 273.15;

            if (temperatura < 0) {
                printf("Temperatura muito baixa!\n");
            }
            else if (temperatura <= 25) {
                printf("Temperatura normal.\n");
            }
            else if (temperatura <= 35) {
                printf("Temperatura alta!\n");
            }
            else {
                printf("Temperatura muito alta!\n");
            }
        }

        else {
            printf("Unidade invalida!\n");
            continue;
        }

        if (temperatura > 35) {

            contador++;

            printf("Temperaturas consecutivas acima do limite: %d\n", contador);

            if (contador == 3) {

                encerrarSistema();

                break;
            }
        }
        else {
            contador = 0;
        }
    }

    return 0;
}