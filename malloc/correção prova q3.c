#include<stdio.h>
#include<stdlib.h>
float ** cria_matriz(int l,int c);
float ** soma_matriz(float **a, float **b, int l, int c);
void libera_matriz(float **a, int linhas);
int main()
{

    return 0;
}
float ** cria_matriz(int l,int c){
    float **m = (float**) malloc(l*sizeof(float *));
    for(int i=0;i<l;i++)
    {
        m[i]=(float*)malloc(sizeof(float));
        for(int j=0;j<c;j++)
        {
            m[i][j]=0.0;
        }
    }
    return m;
}
float ** soma_matriz(float **a, float **b, int l, int c){
    float ** R= cria_matriz(l,c);
    for (int i=0;i<l,i++)
    {
        for(int j=0;j<c;j++)
        {
            R[i][j]=a[i][j]+b[i][j];
        }
    }
    return R;
}
void libera_matriz(float **a, int linhas){
    for(int i=0;i<linhas;i++)
    {
        free(a[i]);
    }
    free(a);
}