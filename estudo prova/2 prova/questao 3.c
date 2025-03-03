#include<stdio.h>
#include<stdlib.h>
float** cria_matriz(int linhas, int colunas); 
float** soma_matriz(float** A, int n, int m, float** B,int o,int p);  
void libera_matriz(float** A, int linhas);
int main()
{
    float** a=cria_matriz(2,2);
    float** b=cria_matriz(2,2);
    float** c= soma_matriz(a,2,2,b,2,2);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%.2f",c[i][j]);
        }
    }
    libera_matriz(a,2);
    libera_matriz(b,2);
    libera_matriz(c,2);
    return 0;
}
float** cria_matriz(int linhas, int colunas){
    float **matriz =(float**)malloc(linhas*sizeof(float*));
    for(int i=0;i<linhas;i++)
    {
        matriz[i] = (float*)malloc(colunas*sizeof(float));
        for(int j=0;j<colunas;j++)
        {
            
            scanf("%f%*c",&matriz[i][j]);
        }
        printf("\n");
    }
    return matriz;
}
float** soma_matriz(float** A, int n, int m, float** B,int o,int p){
    if(n != o || m != p){
        printf("ERRO NA SOMA DAS MATRIZES");
        exit(1);
    }

    float**soma=(float**)malloc(n*sizeof(float*));
    for(int i=0;i<n;i++){
        soma[i]= (float*)malloc(m*sizeof(float));
        for(int j=0;j<m;j++)
        {
            soma[i][j]=A[i][j]+B[i][j];
        }
    }
    return soma;
}
void libera_matriz(float** A, int linhas){
    for(int i=0;i<linhas;i++){
        free(A[i]);
    }
    free(A);
}