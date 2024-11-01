#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int poli(int x)
{
    int calculo= 2*(pow(x,3))+pow(x,2)+3;
    return calculo;
}
 
int main()
{
    int num,recebe;
    printf("Digite um numero: ");
    scanf("%d",&num);
    recebe=poli(num);
    printf("O valor final do polinomio eh: %d",recebe);
    return 0;
}