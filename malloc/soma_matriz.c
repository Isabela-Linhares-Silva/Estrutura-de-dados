#include<stdio.h>
#include<stdlib.h>
float** cria_matriz(int linhas, int colunas); 
float** soma_matriz(float** A, int n, int m, float** B, int o, int p);  
void libera_matriz(float** A, int linhas);

int main (){

    float** A = cria_matriz(2,2);
    float** B = cria_matriz(2,2);
    printf("Matriz A: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             printf("%f ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz B: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             printf("%f ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    float** recebe= soma_matriz(A,2,2,B,2,2);

    printf("SOMA Matriz : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             printf("%f ",recebe[i][j]);
        }
        printf("\n");
    }
    libera_matriz(A,2);
    libera_matriz(B,2);

    return 0;
}
float** cria_matriz(int linhas, int colunas){
    float ** matriz = (float **)malloc(linhas*sizeof(float*));
    for(int i=0;i<linhas;i++)
    {
        matriz[i]=(float*)malloc(colunas*sizeof(float));
        for(int j=0;j<colunas;j++){
            matriz[i][j]=8.0;
        }
    }
    return matriz;
} 

float** soma_matriz(float** A, int n, int m, float** B, int o, int p){
    if(n != o || m != p){
        exit(1);
    }
    float ** soma = (float**)malloc(n*sizeof(float*));
    for(int i=0;i<n;i++){
        soma[i]= (float*)malloc(m*sizeof(float));
        for(int j=0;j<m;j++){
            soma[i][j]= A[i][j]+B[i][j];
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
