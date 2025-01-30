#include<stdio.h>
#include<stdlib.h>
typedef struct ponto{
    float x;
    float y;
}Ponto;
typedef Ponto* PPonto;
PPonto centro_geo(PPonto lista_pontos,int n); 
int main(){
    int n;
    printf("Informe quantos pontos quer receber: ");
    scanf("%d",&n);
    
    PPonto puento = (PPonto) malloc(n*sizeof(Ponto));
    for(int i=0;i<n;i++){
        printf("Ponto x:");
        scanf("%f",&puento[i].x);
        printf("Ponto y: ");
        scanf("%f",&puento[i].y);
    }
    PPonto meio= centro_geo(puento,n);
    printf("O centro dos pontos inseridos eh X: %.2f,Y: %.2f",meio->x,meio->y);
    return 0;
}
PPonto centro_geo(PPonto lista_pontos,int n){
    PPonto centro=(PPonto)malloc(n*sizeof(Ponto));
    float somax=0,somay=0;
    for(int i=0;i<n;i++)
    {
         somax+=lista_pontos[i].x;
         somay+= lista_pontos[i].y;
    }
    centro->x= somax/n;
    centro->y=somay/n;
    return centro;
}
