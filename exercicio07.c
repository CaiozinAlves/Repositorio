#include <stdio.h>

main() {
    char nome[10][50], sexo;
    float altura, peso, altura_total_homens = 0, altura_total_mulheres = 0, peso_total_homens = 0, peso_total_mulheres = 0, altura_total = 0, peso_total = 0;
    int num_homens = 0, num_mulheres = 0;

    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nome[i]);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        printf("Peso (em quilogramas): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            num_homens++;
            altura_total_homens += altura;
            peso_total_homens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
            altura_total_mulheres += altura;
            peso_total_mulheres += peso;
        }

        altura_total += altura;
        peso_total += peso;
    }

    
    float altura_media_homens = num_homens > 0 ? altura_total_homens / num_homens : 0;
    float altura_media_mulheres = num_mulheres > 0 ? altura_total_mulheres / num_mulheres : 0;
    float altura_media_grupo = (altura_total_homens + altura_total_mulheres) / 10;

    float peso_media_homens = num_homens > 0 ? peso_total_homens / num_homens : 0;
    float peso_media_mulheres = num_mulheres > 0 ? peso_total_mulheres / num_mulheres : 0;
    float peso_media_grupo = peso_total / 10;

    
    printf("\nResultados:\n");
    printf("Número de homens: %d\n", num_homens);
    printf("Número de mulheres: %d\n", num_mulheres);
    printf("Altura média dos homens: %.2f metros\n", altura_media_homens);
    printf("Altura média das mulheres: %.2f metros\n", altura_media_mulheres);
    printf("Altura média do grupo: %.2f metros\n", altura_media_grupo);
    printf("Peso médio dos homens: %.2f kg\n", peso_media_homens);
    printf("Peso médio das mulheres: %.2f kg\n", peso_media_mulheres);
    printf("Peso médio do grupo: %.2f kg\n", peso_media_grupo);

    
}
