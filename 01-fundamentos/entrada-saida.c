#include <stdio.h>

int main()
{
    char nome[100];
    int num1, num2, soma;
    //scanf: Lê dados formatados. Para strings com %s, lê apenas até o primeiro espaço.
    //Muito usado para números e valores formatados. Para inteiros, funciona bem com %d.

    printf("Qual e o seu nome? ");
    scanf("%99s", nome);

    printf("Digite o primeiro numero para soma: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Oi, %s. A soma e %d", nome, soma);

    return 0;
}
