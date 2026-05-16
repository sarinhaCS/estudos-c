//Objetivo: Receber um vetor de dez elementos inteiros positivos
//e mostrar em outro vetor o valor do fatorial de cada elemento do primeiro vetor
#include <stdio.h>
#define TAMANHO 10 
//Facilita a modificação da quantidade de elementos depois

int fatorial(int aux)
{
    int fat = 1;
    for(int j = aux; j > 1; j--)
    {
        fat = fat * j;
    }

    return fat;
}

void calculo_vet_fat(int vet[])
{
    int fato[TAMANHO]; //Vetor do resultado fatorial dos elementos
    int i;
    for(i = 0; i < TAMANHO; i++)
    {
        fato[i] = fatorial(vet[i]);
    }
    for(i = 0; i < TAMANHO; i++)
    {
        printf("%d! %d\n", vet[i], fato[i]);
    }
}

int main()
{
    int vet[TAMANHO]; //Vetor dos elementos

    printf("Digite dez valores inteiros: \n");
    
    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    calculo_vet_fat(vet);
    return 0;
}
