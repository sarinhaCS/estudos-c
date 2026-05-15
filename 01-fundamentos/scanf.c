#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[100];
  printf("Qual e o seu nome? ");
  scanf("%s", &nome);

  system("cls");
  printf("Oi, %s\n", nome);
  
  return 0;
}
