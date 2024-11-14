#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void calc_esfera(float r,float*area,float*volume)
{
    *area=4*(pow(r,2));
    *volume=(4*(pow(r,3)))/3;
}
int main()
{
    float r,area,volume;
    printf("Informe o valor do raio: ");
    scanf("%f",&r);
    calc_esfera(r,&area,&volume);
    printf("A area da superficie eh: %.2f\n O volume eh: %.2f",area,volume);
    return 0;
}