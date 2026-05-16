#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    int num1, num2, soma;

    printf("Qual e o seu nome? ");
    scanf("%s", &nome);

    printf("Digite o primeiro numero para soma: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    system("cls");
    printf("Oi, %s. A soma e %d", nome, soma);

    return 0;
}
