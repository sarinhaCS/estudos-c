//Objetivo: Por em prática todos os fundamentos em C. O IMC é um exemplo clássico
//O cálculo é um aferramenta rápida de triagem populacional para identificar desvios no peso corporal.
//Porém, ela não diferencia a massa muscular da massa gorda, por isso não deve ser usado para diagnóstico preciso.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    int idade;
    float altura;
    float peso;
    double imc;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    printf("Digite o seu peso (Kg): ");
    scanf("%f", &peso);

    //O cálculo do IMC se define por Peso/ALtura²
    imc = peso/(altura*altura);

    system("cls"); //Limpa a tela do terminal
    printf("%s, %d anos, %.2lf de IMC", nome, idade, imc);
    return 0;
}
