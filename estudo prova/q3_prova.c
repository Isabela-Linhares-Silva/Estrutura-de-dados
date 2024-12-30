#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int conta_caracteres(char*str,char c);
int main()
{
    char str[50],c;
    printf("Digite uma palavra: ");
    gets(str);
    fflush(stdin);
    printf("Digite uma letra: ");
    scanf("%c%*c",&c);
    printf("Repetiu: %d vezes",conta_caracteres(str,c));
    return 0;
}
int conta_caracteres(char*str,char c)
{
    int tam=strlen(str),cont=0;
    for(int i=0;i<=tam;i++)
    {
        if(str[i]==c)
        {
            cont++;
        }
    }
    return cont;
}