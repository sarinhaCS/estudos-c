#include <stdio.h>

//Objetivo: Inverter uma linha de texto usando recursão

void inverte(void) 
{
    int ch;
    ch = getchar(); //Lê um caractere de entrada

    if (ch != '\n' && ch != EOF) { //Se for Enter ('\n') ou fim de arquivo (EOF), encerra condição
        inverte(); //Chamada recursiva: lê o próximo caractere
    }

    //Na volta da recursao, imprime o caractere lido
    putchar(ch);
}

int main(void) 
{
    printf("Digite uma palavra ou frase: ");
    inverte();

    printf("\n");
    return 0;
}
