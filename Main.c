#include <stdio.h>

int  soma(int numero1, int numero2) { return numero1 + numero2; }
int subtracao(int numero1, int numero2) { return numero1 - numero2; }
int multiplicacao(int numero1, int numero2) { return numero1 * numero2; }
int divisao(int numero1, int numero2) { return numero1 / numero2; }

int main(void) {
    int  numero1, numero2;
    char operadores;
    char repetir[5];

    do {
        printf("\nNumero 1:\n");
        scanf("%d", &numero1);
        printf("\nOperador (| + | - | x | / |): \n");
        scanf(" %c", &operadores);
        printf("\nNumero 2:\n");
        scanf("%d", &numero2);

        switch (operadores) {
            case'+': printf("\nResultado: %d\n", soma(numero1, numero2)); break;
            case'-': printf("\nResultado: %d\n", subtracao(numero1, numero2)); break;
            case'x': printf("\nResultado: %d\n", multiplicacao(numero1, numero2)); break;
            case'/':
                if (numero2 != 0) {
                    printf("%d\n", divisao(numero1, numero2));
                } else {
                    printf("\nTentando dividir por zero neh kkk\n");
                }
                break;
            default:
                printf("\nOperador invalido! Use: +, -, x ou /. \n");
        }
            printf("\nDeseja continuar? \n");
            scanf(" %s", repetir);
            } while (repetir[0] == 's' || repetir[0] == 'S' || repetir[5] == 'sim' || repetir[5] == 'Sim');

    return 0;
}


