#include<stdio.h>
#include<stdlib.h>
typedef struct ponto{
    float x;
    float y;
}Ponto;
Ponto * centro_geo(Ponto ** vetor,int n);
int main()
{
    int n=0;
    printf("Quantos pontos voce deseja? \n");
    scanf("%d%*c",&n);
    Ponto** vetor=(Ponto**)malloc(n*sizeof(Ponto*));// ** devido ser vetor
    for(int i=0;i<n;i++)
    {
        vetor[i]=(Ponto*)malloc(sizeof(Ponto));
        scanf("%f,%f%*c",&vetor[i]->x,&vetor[i]->y);
    }
    Ponto * cg= centro_geo(vetor,n);
    printf("CG = %.2f %.2f",cg->x,cg->y);
    return 0;
}
Ponto * centro_geo(Ponto ** vetor,int n){
    Ponto * pm=(Ponto *)malloc(sizeof (Ponto));
    pm->x=0;
    pm->y=0;
    for(int i=0;i<n;i++)
    {
        pm->x += vetor[i]->x;
        pm->y += vetor[i]->y;
    }
    pm->x/=n;// /= == +=;
    pm->y/=n;
    return pm;
}