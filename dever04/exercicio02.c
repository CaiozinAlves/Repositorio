#include <stdio.h>

 main() {
    int A, B, C, D;
    
    printf("\nDigite quatro valores separados por espaços: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    int maior = A; 
    int menor = A; 
    
    if (B > maior) {
        maior = B;
    } else if (B < menor) {
        menor = B;
    }
    
    if (C > maior) {
        maior = C;
    } else if (C < menor) {
        menor = C;
    }
    
    if (D > maior) {
        maior = D;
    } else if (D < menor) {
        menor = D;
    }
    
    printf("\nO maior valor é: %d\n", maior);
    printf("\nO menor valor é: %d\n", menor);
    
    
}
