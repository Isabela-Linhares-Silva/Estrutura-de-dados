#include<stdio.h>
#include<stdlib.h>
int fat(int n)
{
    if(n==0) return 1;
    else return n*fat(n-1);
}
int main()
{
    int n,recebe;
    scanf("%d",&n);
    recebe =fat(n);
    printf("O fatorial de %d eh: %d",n,recebe);
    return 0;
}