//Objetivo: Reeber três notas de um aluno, calcular a média aritmética e mostraar a situação dele
#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3, media;
	
	printf("Digite as tres notas: \n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	
	media =  (nota1 + nota2 + nota3) / 3;
	
	printf("\n\nSua media final e: %.2f \n", media);
	
	if( media >= 0 && media < 3) printf("Reprovado!"); //Média entre 0.00 e 2.99
	else if(media >= 3 && media < 7) printf("Exame Final!"); //Média entre 3.00 e 6.99
	else printf("Aprovado! Parabens."); //Média entre 7.00 e 10.00
	
	return 0;	
}
