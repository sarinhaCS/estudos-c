//Objetivo: Apresentando alguns tipos de variáveis que podem ser usados, como o double(%lf) e entre outros
//Com essas informações, como nome, idade e altura, estamos sempre informando para preencher algum formulário,
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    system("cls");
    printf("Nome: %s", nome); //%s para tipo de variável string
    printf("Idade: %d\n", idade); //%d para tipo de variável inteiro
    printf("Altura: %.2f\n", altura); //%f para tipo de variável float, o ".2" indica que mostrará duas casas decimais

    return 0;
}
