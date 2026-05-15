//Objetivo: Calcular a média aritmética de uma turma
#include <stdio.h>

#define TAMANHO 10 
//Quantidade de notas a ser inseridas no vetor

int main()
{
  float notas[TAMANHO]; //Declaração de vetor(array) do tipo float
  float media = 0.0;

  for(int i = 0; i < TAMANHO; i++){
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%f", &notas[i]);
    media += notas[i];
  }

  media /= TAMANHO; //Com o resultado do laço, divide pela quantidade de notas
  printf("Media das notas: %.2f\n", media);

  return 0;
}
