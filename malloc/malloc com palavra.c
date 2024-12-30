#include<stdio.h>
#include<stdlib.h>
int main()
{
    int tam;
    printf("Informe o tamalho desejado da palavra: ");
    scanf("%d",&tam);
    fflush(stdin);
    char * palavra=(char *)malloc((tam+1)*sizeof(char));// o tam +1 eh por conta do \0
    printf("Digite a palavra/frase desejada: ");
    gets(palavra);
    fflush(stdin);
    printf("%s",palavra);
    return 0;

}