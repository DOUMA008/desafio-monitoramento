#include <stdio.h>

int main() {

    float temperatura;
    printf("===Sistema de Monitoramento===\n");

    while (1) {
        printf("Digite uma temperatura:\n");
        scanf("%f", &temperatura);

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
    return 0;
}