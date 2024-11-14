#include<stdio.h>
#include<stdlib.h>
int potencia(int base,int expoente)
{
    int resultado=1;
    for(int i=0;i<expoente;i++)
    {
        resultado*=base;
    }
    return resultado;
}
int main()
{
    int base,expoente,recebe;
    printf("Digite um valor para base: ");
    scanf("%d",&base);
    printf("Digite um valor para expoente: ");
    scanf("%d",&expoente);
    recebe= potencia(base,expoente);
    printf("O resultado eh: %d",recebe);
    return 0;
}