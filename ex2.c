// Peça um mês ao usuário (pode ser em texto janeiro a dezembro ou em número de 1 a 12). Em seguida, mostre qual é a estação do ano daquele mês, sabendo que:
// - Verão: Dezembro, janeiro e fevereiro.
// - Outono: Março, abril e maio.
// - Inverno: Junho, julho e agosto.
// - Primavera: Setembro, outubro e novembro.
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "utils.c"

int main() {
    printf("--- Escolha um mês para consultar a estação do ano ---");
    printf("\n(número de 1 a 12 correspondente aos meses)\n");
    printf("R: ");
    int mes = ler_int();

    switch (mes) {
        case 1:
            printf("Janeiro: Verão");
            break;
    
        case 2:
            printf("Fevereiro: Verão");
            break;
        
        case 3:
            printf("Março: Outono");
            break;

        case 4:
            printf("Abril: Outono");
            break;

        case 5:
            printf("Maio: Outono");
            break;

        case 6:
            printf("Junho: Inverno");
            break;

        case 7:
            printf("Julho: Inverno");
            break;

        case 8:
            printf("Agosto: Inverno");
            break;

        case 9:
            printf("Setembro: Primavera");
            break;

        case 10:
            printf("Outubro: Primavera");
            break;

        case 11:
            printf("Novembro: Primavera");
            break;

        case 12:
            printf("Dezembro: Verão");
            break;

        default:
            break;
    }
    
    printf("\n");
    return 0;
}
