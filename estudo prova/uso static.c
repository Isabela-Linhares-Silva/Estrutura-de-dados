#include<stdio.h>
#include<stdlib.h>
void imprime(float a)
{
    static int n=1;
    printf("%.2f ",a);
    if(n%5==0) printf("\n");
    n++;
}
int main()
{
    imprime(10);
    imprime(20);
    imprime(20);
    imprime(20);
    imprime(20);
    imprime(20);
    imprime(20);
    imprime(20);
    imprime(23);
    imprime(7);
    imprime(9);
    return 0;
}