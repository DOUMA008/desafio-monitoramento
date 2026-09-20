#include <stdio.h>

int main() {

    float temperatura;
    printf("===Sistema de Monitoramento===\n");

    while (1) {
        printf("Digite uma temperatura:\n");
        scanf("%f", &temperatura);

        printf("Digite a unidade de medida (C para Celsius, F para Fahrenheit, K para Kelvin):\n");
        char unidade;
        scanf(" %c", &unidade);

        if (unidade == 'C' || unidade == 'c') {
            if (temperatura < 0) {
                printf("Temperatura muito baixa!\n");
            } else if ( temperatura <= 25) {
                printf("Temperatura normal.\n");
            } else if (temperatura <= 35) {
                printf("Temperatura alta!\n");
            } else {
                printf("Temperatura muito alta!\n");
            }

        } else if (unidade == 'F' || unidade == 'f') {
            temperatura = (temperatura - 32) * 5 / 9; // Convertendo para Celsius
            if (temperatura < 0) {
                printf("Temperatura muito baixa!\n");
            } else if ( temperatura <= 25) {
                printf("Temperatura normal.\n");
            } else if (temperatura <= 35) {
                printf("Temperatura alta!\n");
            } else {
                printf("Temperatura muito alta!\n");
            }
        } else if (unidade == 'K' || unidade == 'k') {
            temperatura = temperatura - 273.15; // Convertendo para Celsius
            if (temperatura < 0) {
                printf("Temperatura muito baixa!\n");
            } else if ( temperatura <= 25) {
                printf("Temperatura normal.\n");
            } else if (temperatura <= 35) {
                printf("Temperatura alta!\n");
            } else {
                printf("Temperatura muito alta!\n");
            }
        }
    }
    return 0;
}      