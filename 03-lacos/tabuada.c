#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("Escolha um umero de 2 a 9: ");
    scanf("%d", &num);
    printf("\n TABUADA DO %d\n\n", num);

    for(i = 1; i <= 9; i++)
    {
        printf(" %d x %d = %2d\n", num, i, num * i);
    }

    return 0;
}
