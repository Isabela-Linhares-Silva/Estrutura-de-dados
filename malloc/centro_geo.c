#include<stdio.h>
#include<stdlib.h>
typedef struct ponto
{
    float x;
    float y;

}Ponto;
typedef Ponto * PPonto;
PPonto centro_geo(PPonto* lista_pontos,int n);

int main (){
    int n;
    printf("Informe quantos pontos deseja receber: ");
    scanf("%d%*c",&n);
    PPonto* pontos = (PPonto*)malloc(n*sizeof(PPonto));
    for(int i=0;i<n;i++){
        pontos[i] = (PPonto)malloc(sizeof(Ponto));
        printf("X: ");
        scanf("%f%*c",&pontos[i]->x);
        printf("Y: ");
        scanf("%f%*c",&pontos[i]->y);
        printf("\n");  
    }
    PPonto centrinho= centro_geo(pontos,n);
    printf("Centro x: %f\nCentro y: %f",centrinho->x,centrinho->y);

}

PPonto centro_geo(PPonto* lista_pontos,int n){
    PPonto centro = (PPonto)malloc(sizeof(Ponto));
    float somax = 0;
    float somay=0;
    for(int i=0;i<n;i++)
    {
        somax+= lista_pontos[i]->x;
        somay+= lista_pontos[i]->y;
    }
    centro->x = somax/n;
    centro->y = somay/n;
    return centro;
}