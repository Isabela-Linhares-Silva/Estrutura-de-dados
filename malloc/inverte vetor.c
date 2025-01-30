#include<stdio.h>
#include<stdlib.h>
void inverte(int n, int *vet);
int main(){
    int n;
    printf("Informe quantos numeros quer receber: ");
    scanf("%d",&n);
    int * vet=(int *) malloc(n*(sizeof(int)));
    for(int i=0;i<n;i++){
        printf("Informe o %d numero: ",i+1);
        scanf("%d",&vet[i]);
    }
    inverte(n,vet);
    printf("Invertido: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",vet[i]);
    }
    return 0; 
}
void inverte(int n, int *vet){
    int aux;
    for(int i=0;i<n/2;i++){
        aux=vet[i];
        vet[i]=vet[n-1-i];
        vet[n-1-i]=aux;
    }

}