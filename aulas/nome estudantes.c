#include<stdio.h>
#include<stdlib.h>
void recebe(char**nome,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Informe o nome: ");
        fflush(stdin);
        gets(nome[i]);
    }
    
}
void mostra(char**nome, int n){
    for(int i=0;i<n;i++)
        printf("%s \n",nome[i]);
}
int main()
{
    char **nome;
    int n;
    printf("Informe quantos nomes quer receber: ");
    scanf("%d",&n);
    nome = (char *)malloc(n*sizeof(char));
    recebe(nome,n);
    mostra(nome,n);
    return 0;
}