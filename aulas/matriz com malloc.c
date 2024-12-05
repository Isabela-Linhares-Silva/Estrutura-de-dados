#include<stdio.h>
#include<stdlib.h>
void imprime_mat(int**m,int l,int c);
int main()
{
    int **mat=(int**)malloc(3*sizeof(int*));
    int i=0,j=0;
    for(i=0;i<3;i++)
    {
        mat[i]=(int*)malloc(4*sizeof(int));
        for(j=0;j<4;j++)
        {
            scanf("%d%*c",&mat[i][j]);
        }
    }
    return 0;
}
void imprime_mat(int**m,int l,int c)
{
    int i=0,j=0;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%8d",m[i][j]);
        }
        printf("\n");
    }
}