#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float soma=0,soma_turma=0, media=0;
    printf("Informe a quantidade de alunos: ");
    scanf("%d",&n);
    float ** notas=(float**) malloc(n*sizeof(float *));
    for(int i=0;i<n;i++)
    {
        notas[i]= (float*) malloc(2*sizeof(float));
        for(int j=0;j<2;j++){
            printf("Informe a %d nota: ",j+1);
            scanf("%f%*c",&notas[i][j]);
            soma+= notas[i][j];
            soma_turma+= notas[i][j]; 
        }
        media= soma/2; 
        printf("A media do aluno %d eh : %.2f\n",i+1,media);
        media=soma=0; 
    }
    printf("A media de todas as notas eh : %.2f",soma_turma/(n*2));

    return 0;
}