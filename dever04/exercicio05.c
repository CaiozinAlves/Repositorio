#include <stdio.h>

 main() {
    int numero;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if (numero == 5 || numero == 200 || numero == 400) {
        printf("\nO número esta na categoria 5, 200 ou 400.\n");
    } else if (numero >= 500 && numero <= 1000) {
        printf("\nO numero esta no intervalo entre 500 e 1000.\n");
    } else {
        printf("\nO numero esta fora dos escopos anteriores.\n");
    }

    
}

