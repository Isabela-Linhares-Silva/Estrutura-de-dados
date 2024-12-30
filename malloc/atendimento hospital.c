#include<stdio.h>
#include<stdlib.h>
#define TAM_FILA 2;
typedef struct paciente{
    int id_paciente;
    char nome[91];
    int idade;
    int prioridade;
}Paciente;
typedef Paciente * PPaciente;
PPaciente * cria_fila (int tam);
void insere_paciente(PPaciente * fila,int tam);
int main()
{
    return 0;
}
PPaciente * cria_fila (int tam)
{
    PPaciente * fila =(PPaciente *)malloc(tam*sizeof(Paciente));
    for (int i=0;i<tam;i++)
    {
        fila[i]=NULL;
    }
    return fila;
}
