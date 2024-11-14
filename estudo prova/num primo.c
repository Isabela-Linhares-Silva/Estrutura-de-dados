#include<stdio.h>
#include<stdlib.h>
int num_primo(int num)
{
    int divs=0;
    for(int i=0;i<=num;i++)
    {
        if(num%i==0)
        {
            divs++;
        }
    }
    if(divs==2)
    {
        return 1;
    }
    else return 0;
}
int main ()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);
    if(num_primo(num))
    {
        printf("Eh primo!");
    }
    else 
    {
        printf("Nao eh primo!");
    }
    return 0;
}