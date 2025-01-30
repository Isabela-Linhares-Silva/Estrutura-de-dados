#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double avalia(double * poli, int grau, double x);
int main(){
    int grau;
    printf("Informe o grau do polinomio: ");
    scanf("%d%*c",&grau);
    double * polinomio=(double*)malloc(grau*sizeof(double));
    for(int i=0;i<=grau;i++){
        printf("Informe o %d termo(grau %d): ",i+1,i);
        scanf("%lf%*c",&polinomio[i]);

    }
    double x;
    printf("Informe o valor de x: ");
    scanf("%lf%*c",&x);
    printf("\nRESULTADO FINAL: %lf",avalia(polinomio,grau,x));
    return 0;
}
double avalia(double * poli, int grau, double x){
    double resultado=0;
    for(int i=0;i<=grau;i++){
        resultado+= poli[i]*pow(x,i);
    }
    return resultado;

}