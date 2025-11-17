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
    printf("\n- Sul\n- Sudeste\n- Centro-Oeste\n- Nordeste\n- Norte\n");
    printf("R: ");
    char* cidade = ler_texto();

    if(strcmp(cidade, "sul") == 0) {
        printf("\nSul: R$ 5,00");

    } else if (strcmp(cidade, "sudeste") == 0) {
        printf("\nSudeste: R$ 5,00");
    
    } else if (strcmp(cidade, "centro-oeste") == 0) {
        printf("\nCentro-Oeste: R$ 7,50");
    
    } else if (strcmp(cidade, "nordeste") == 0) {
        printf("\nNordeste: R$ 12,50");
    
    } else if (strcmp(cidade, "norte") == 0) {
        printf("\nNorte: R$ 15,00");
    
    } else {
        printf("\nRegião inválida!");
    }

    printf("\n");
    return 0;
}