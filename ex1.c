// Peça uma região do Brasil ao usuário e **apresente um custo de frete** seguindo estas condições:
// - Sul: R$ 5,00
// - Sudeste: R$ 5,00
// - Centro-Oeste: R$ 7,50
// - Nordeste: R$ 12,50
// - Norte: R$ 15,00

#include <stdio.h>
#include <stdint.h>
#include "utils.c"

int main() {
    printf("--- Escolha uma das regiões para consultar o custo de frete ---");
    printf("\n1 - Sul\n2 - Sudeste\n3 - Centro-Oeste\n4 - Nordeste\n5 - Norte\n");
    printf("R: ");
    int opcao = ler_int();

    switch (opcao) {
        case 1: // Sul
        case 2: // Sudeste
            printf("\nSul/Sudeste: R$ 5,00");
            break;

        case 3: // Centro-Oeste
            printf("\nCentro-Oeste: R$ 7,50");
            break;

        case 4: // Nordeste
            printf("\nNordeste: R$ 12,50");
            break;

        case 5: // Norte
            printf("\nNorte: R$ 15,00");
            break;

        default:
            printf("\nRegiao invalida!");
            break;
    }

    printf("\n");
    return 0;
}