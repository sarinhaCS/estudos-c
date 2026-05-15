//Objetivo: Calcular a fatorial de um número
#include <stdio.h>

int main()
{
    int num, fat;
  
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);

    if(num <= 0) return NULL; //Verificando se num é zero ou negativo

    //Inicializar a variável fat com 1, pois o fatorial e uma multiplicação
    fat = 1;

    //Enquanto num for maior que 1, multiplica fat por num e vai diminuindo num
    while (num > 1)
    {
        fat *= num;  //fat = fat * num;
        num--;       //num = num - 1; 
    }

    printf("Resultado do fatorial: %d\n", fat);

    return 0;
}
