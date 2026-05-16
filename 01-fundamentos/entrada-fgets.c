//Objetivo: Usar para armazenar uma string com fgets. Mais seguro para ler textos
#include <stdio.h>

int main()
{
  char texto[100]; //Vetor de caracteres para guardar o que o usuário digitar
  
  printf("Digite uma frase: ");
  
  fgets(texto, sizeof(texto), stdin); //Lê uma linha inteira do teclado e guarda no vetor texto
  //fgets aceita espaços e armazena o texto dentro do vetor nome.
  //sizeof(nome) informa o tamanho total do vetor.
  //stdin indica que a entrada vem do teclado.

  printf("\nVoce digitou: %s", texto);

  return 0;
}
