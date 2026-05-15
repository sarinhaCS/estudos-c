#include <stdio.h>
#include <stdlib.h>

//Função para inserir os valores das matrizes
void inserir(int mat[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

//Função para somar todos os elementos da matriz
int soma(int mat[3][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma = soma + mat[i][j];
        }
    }
    return soma;
}

int main(){
    int mat[3][3]; //Matriz com 3 linha e 3 colunas

    inserir(mat);
    printf("A soma de todos os elementos: %d", soma(mat));

    return 0;
}
