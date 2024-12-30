#include<stdio.h>
#include<stdlib.h>
int soma_divisores(int num);
int main()
{   
    int num;
    scanf("%d", &num);
    int resultado = soma_divisores(num);
    printf("%d",resultado);
    return 0;
}
int soma_divisores(int num)
{
    int soma=0;
    for(int i=1;i<num;i++)
    {
        if(num % i == 0)
        {
            soma += i;
        }
    }
    return soma;
}