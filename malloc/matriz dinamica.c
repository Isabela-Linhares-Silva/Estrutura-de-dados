#include<stdio.h>
#include<stdlib.h>
void media(int num,float * nota);
int main()
{
    int num;
    printf("Quantos estudantes tem na turma: ") ;
    scanf("%d",&num);
    float * notas=(float *)malloc(num*sizeof(float));
    for(int i=0;i<num;i++)
    {
        printf("Digite a nota do %d estudante: ",i+1);
        scanf("%f%*c",&notas[i]);
    }
    
    media(num,notas);

    return 0;
}
void media(int num,float * nota){
    float soma=0;
    for(int i=0;i<num;i++)
    {
        soma+= nota[i];
    }
    printf("A media da turma eh: %.2f",soma/num);
}