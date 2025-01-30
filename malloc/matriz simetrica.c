#include<stdio.h>
#include<stdlib.h>
void simetria(int linhas,int colunas,int ** matriz);
int main(){
    int l,c;
    printf("Infome a quantidade de linhas: ");
    scanf("%d%*c",&l);
    printf("Indorme a quantidade de colunas: ");
    scanf("%d%*c",&c);
    int** matriz= (int**)malloc(l*sizeof(int*));
    for(int i=0;i<l;i++)
    {
        matriz[i] =(int*) malloc(c*sizeof(int));
        for(int j=0;j<c;j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    simetria(l,c,matriz);
    for(int i=0;i<l;i++){
            free(matriz[i]);  
    }
    free(matriz);


    return 0;
}
void simetria(int linhas,int colunas,int ** matriz){
    if(linhas!=colunas){
        printf("Nao eh simetrica quadrada!!!!!");
        return;
    }
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            if(matriz[i][j]!=matriz[j][i]){
                printf("Matriz nao eh simetrica!!");
                return;
            }
        }
    }

    printf("EH uma matriz simetrica quadrada!");
}