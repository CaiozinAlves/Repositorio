#include <stdio.h>
#include <math.h>

 main() {
    double numero;
    
    printf("\nDigite um numero: ");
    scanf("%lf", &numero);
    
    if (numero >= 0) {
        double raiz_quadrada = sqrt(numero);
        printf("\nA raiz quadrada do numero é: %.2lf\n", raiz_quadrada);
    } else {
        double quadrado = numero * numero;
        printf("\nO quadrado do numero é: %.2lf\n", quadrado);
    }
    
}
