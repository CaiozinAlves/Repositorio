#include<stdio.h>

int main(){
    float peso;
    float limitePeso = 60.0;

    printf("Digite seu peso:");
    scanf("%f",&peso);

    if(peso > limitePeso){
        printf("O peso e menor que 60kg.\n");
    }else{
        printf("O peso e maior ou igual a 60kg.\n");
    }
     printf("\n-----Resultado-----");

     printf("\nContinua...");

    
}