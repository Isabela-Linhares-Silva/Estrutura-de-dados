#include<stdio.h>
#include<stdlib.h>
int main()
{
    char letra1,letra2;
    printf("Digite duas letras: ");
    scanf("%c%*c",&letra1);//%*c limpa o buffer do teclado
    scanf("%c",&letra2);
    printf("%c\n",letra1);
    printf("%c",letra2);

    return 0;
}