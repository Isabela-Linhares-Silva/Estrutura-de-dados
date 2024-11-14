#include<stdio.h>
#include<stdlib.h>
int main()
{
    short int a=0;
    int i=32700;
    for(i=0;i<32800;i++,a=i)
    {
        printf("%d : %d\n",i,a);
    }
    printf("O tamanho do a: %d",sizeof(a));
    return 0;
}