//Objetivo: Receber duas notas e calcular a media de acordo com a escolha: A (Aritmética) ou P (Ponderada)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float media(float nota1, float nota2, char caso)
{
    float mediaA, mediaP;

    mediaA = (nota1 + nota2) / 2;
    mediaP = ((nota1 * 7) + (nota2 * 3) / 10;

    switch(caso){
        case 'A':
            return mediaA;

        case 'P':
            return mediaP;

        default:
            return -1;
    }
}

int main()
{
    float nota1, nota2;
    char caso;

    printf("Digite as duas notas: ");
    scanf("%f %f %f", &nota1, &nota2);

    printf("\nAgora digite a letra (A ou P) para classificar a media: ");
    scanf(" %c", &caso);

    caso = toupper(caso); //Faz com que a e p também funcionem como A e P

    switch(caso){
        case 'A':
            printf("A media aritmetica e = %.2f\n", media(nota1, nota2, caso));
            break;

        case 'P':
            printf("A media ponderada e = %.2f\n", media(nota1, nota2, caso));
            break;

        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
