#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[100];
  
  printf("Qual e o seu nome? ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';
  
  system("cls");
  printf("Oi! %s", nome);
  
  return 0;
}
