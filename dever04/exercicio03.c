#include <stdio.h>

 main() {
    int A, B, C;
    
    printf("\nDigite tres valores separados por espaços: ");
    scanf("%d %d %d", &A, &B, &C);
    
    
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    
    if (A > C) {
        int temp = A;
        A = C;
        C = temp;
    }
    
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    
    printf("\nOs valores em ordem ascendente sao: %d %d %d\n", A, B, C);
    
    
}
