//Objetivo: Calcular a média de uma nota, aplicando uma função
#include <stdio.h>

float calcularMedia(float nota1, float nota2)
{
    return (nota1 + nota2) / 2; //== return media
}

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = calcularMedia(nota1, nota2);

    printf("A media e: %.2f\n", media);

    if (media >= 7.0) printf("Aluno aprovado!\n");
    else printf("Aluno reprovado!\n");

    return 0;
}
