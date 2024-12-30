#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
typedef struct ponto{
    float x;
    float y;
}Ponto;
typedef Ponto * PPonto;
typedef struct circulo{
    Ponto c;
    float raio;
}Circulo;
typedef Circulo * CCirculo;
void imprime_ponto(PPonto p, int num);
float distancia(PPonto p0, PPonto p1);
int verifica_ponto(PPonto p, CCirculo circulo);

int main()
{
    PPonto p0=(PPonto)malloc(sizeof(Ponto));
    PPonto p1=(PPonto)malloc(sizeof(Ponto));
    CCirculo c1= (CCirculo)malloc(sizeof(Circulo));
    printf("Digite as coordenadas do ponto P:\n");
    printf("Ponto x: ");
    scanf("%f%*c",&p0->x);
    printf("Ponto y: ");
    scanf("%f%*c",&p0->y);

    printf("Digite as coordenadas do ponto P1: \n");
    printf("Ponto x: ");
    scanf("%f%*c",&p1->x);
    printf("Ponto y: ");
    scanf("%f%*c",&p1->y);

    printf("Digite as coordenadas do ponto Circulo(x,y) e seu raio: \n");
    printf("Ponto x: ");
    scanf("%f%*c",&c1->c.x);
    printf("Ponto y: ");
    scanf("%f%*c",&c1->c.y);
    printf("Informe o valor do raio: ");
    scanf("%f%*c",&c1->raio);
    printf("O ponto circulo esta locazido em %.2f,%.2f, com o raio de %.2f",c1->c.x,c1->c.y,c1->raio);

    imprime_ponto(p0,0);
    imprime_ponto(p1,1);

    printf("O ponto p0 está: ");
    if(verifica_ponto(p0,c1)==1){
        printf("Dentro do circulo!!\n");
    }
    else{
        printf("Fora do circulo!!\n");
    }
    free(p0);
    free(p1);
    free(c1);

    return 0;
}
void imprime_ponto(PPonto p, int num_p){
    printf ("O ponto P%d esta localizado em %.2f,%.2f\n",num_p,p->x,p->y);
}
float distancia(PPonto p0, PPonto p1)
{
    return sqrt(pow((p0->x - p1->x),2))+ pow((p0->y - p1->y),2);
}
int verifica_ponto(PPonto p, CCirculo circulo)
{
    if (distancia(p,&circulo->c)<(circulo->raio))
    {
        return 1;
    }
    else{
        return 0;
    }
}