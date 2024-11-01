#include<stdio.h>
#include<stdlib.h>
int modulo(int num)
{
    if(num<0)
    {
        return -num;
    }
}
int main()
{
    int num,recebe;
    printf("Informe um numero: ");
    scanf("%d",&num);
    recebe=modulo(num);
    printf("O modulo do numero digitado eh: %d",recebe);
    return 0;

}
