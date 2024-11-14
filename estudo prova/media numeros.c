#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float funcao(float *num)
{
    float soma=0,media =0;
    for(int i=0;i<11;i++)
    {
        soma+=num[i];

    }
    media =soma/11;
    return media;

}
float variancia(float *num)
{
    float recebe=funcao(num),diferenca[11],soma=0,var=0;
    for(int i=0;i<11;i++)
    {
        diferenca[i]=pow(recebe-num[i],2);
        soma+= diferenca[i];
    }
    var= soma/11; 
    return var; 
}
int main()
{
    float num[11];
    for(int i=0;i<11;i++)
    {
        printf("Informe um numero: ");
        scanf("%f",&num[i]);
    }
    float recebe =funcao(num);
    float riancia= variancia(num);
    printf("A media das idades eh: %f\n",recebe);
    printf("A variancia das idades eh: %f",riancia);
    return 0;
}