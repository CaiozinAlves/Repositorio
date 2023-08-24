#include<stdio.h>
#include<locale.h>

int main(){

     // receber o usuario a idade e informar se ele e maior de iade

    int idade;
    char nome[40];
    float salario;

    printf("Digite o seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite a sua idade");
    scanf("%d",&idade);
    
    printf("\nQual o seu salario");
    scanf("%f",&salario);

    int maiorIdade=18;
    float salarioMin= 1.300;

    if(idade >= 18){

        printf("%s voce e maior", nome);
        printf("\nSua idade e %d", idade);

    }else{
        printf("%s, Voce e menor de idade",nome);

    }

    if(salario<salarioMin){
        printf("\nSeu salario minimo atualmente e?\n");
    }

    printf("\n-----Resultado-----");

    printf("\nContinua...");






}