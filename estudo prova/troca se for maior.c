#include<stdio.h>
#include<stdlib.h>
void swap_crescente(int *num1,int *num2)
{
    int troca;
    if(*num1>*num2)
    {
        troca=*num1;
        *num1=*num2;
        *num2=troca;
    }
}
int main()
{
    int num1, num2;
    printf("Informe dois numeros: ");
    scanf("%d %d",&num1,&num2);
    swap_crescente(&num1,&num2);
    printf("A nova ordem eh: %d %d",num1,num2);
    
    return 0;
}
