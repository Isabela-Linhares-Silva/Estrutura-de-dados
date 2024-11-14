#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    } 
    else if(n==1) 
    {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);

    
}
int main()
{
    int n,recebe;
    printf("Informe quantos elementos voce deseja ver da sequencia de Fibonacci: ");
    scanf("%d",&n);
    recebe=fibonacci(n);
    printf("Resultado: %d",recebe);

    return 0;
}
