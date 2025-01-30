#include<stdio.h>
#include<stdlib.h>
int negativos(int n, float * vet);
int main(){
    int n;
    printf("Informe quantos numeros quer receber: ");
    scanf("%d",&n);
    float * vet= (float *)malloc(n*sizeof(float));
    for (int i=0;i<n;i++){
        printf("Informe o %d numero: ",i+1);
        scanf("%f",&vet[i]);
    }
    printf("Ha %d numeros negativos.",negativos(n,vet));
    return 0;
}
int negativos(int n, float * vet){
    int cont =0;
    for(int i=0;i<n;i++){
        if(vet[i]<0){
            cont++;
        }
    }
    return cont;
}