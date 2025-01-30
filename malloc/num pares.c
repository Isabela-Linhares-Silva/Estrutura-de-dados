#include<stdio.h>
#include<stdlib.h>
int pares(int n, int * vet);
int main(){
    int n;
    printf("Informe quantos numeros quer receber: ");
    scanf("%d",&n);
    int * vet= (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("Ha %d numeros pares.",pares(n,vet));
    return 0;
}
int pares(int n, int * vet){
    int cont=0;
    for(int i=0;i<n;i++){
        if(vet[i]%2==0)
            cont++;
    }
    return cont;
}