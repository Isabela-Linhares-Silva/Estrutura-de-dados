#include<stdio.h>
#include<stdlib.h>
int fat(int n)
{
    if(n==0) return 1;
    else return n*fat(n-1);
}
double calcular(int n)
{
    double soma=0;
    for (int i=1;i<=n;i++)
    {
        soma+=(double)fat(i)/i;
    }
    return soma;
}
int main()
{
    int n,recebe;
    double recebe2;
    scanf("%d",&n);
    recebe =fat(n);
    printf("O fatorial de %d eh: %d",n,recebe);
    recebe2= calcular(n);
    printf("\nResultado: %lf",recebe2);
    return 0;
}