#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *v=(int*)malloc(10*(sizeof(int)));
    if(v==NULL)
    {
        printf("Memoria Insuficiente!\n");
        exit(1);// mostra 1 na saida,facilita saber qual o erro na saida
    }
    int i=1;
    printf("Digite 10 numeros inteiros: ");
    for(i=0;i<10;i++)
    {
        scanf("%d%*c",&v[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",v[i]);
    }
    free(v);
    return 0;
}