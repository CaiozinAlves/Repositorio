#include<stdio.h>

int main(){

    float salario;
    float salarioMin=1320.0;

    printf("Digite seu salario:");
    scanf("%f",&salario);

    if(salario>salarioMin) {
        printf("Ganha mais que o salario minimo.\n");
    } else{
        printf("Ganha igual ou menos que um salario minimo\n");
    }

     printf("\n-----Resultado-----");

     printf("\nContinua...");
}