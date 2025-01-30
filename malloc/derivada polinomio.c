#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void deriva(double *poli,int grau,double *deriv);
int main(){
    int grau;
    printf("Informe o grau do polinomio: ");
    scanf("%d",&grau);
    double * poli=(double *)malloc(grau*sizeof(double));
    for(int i=0;i<=grau;i++){
        printf("Digite o polinomio de grau %d: ",i);
        scanf("%lf%*c",&poli[i]);
    }
    double *deriv=(double*)malloc(grau*sizeof(double));
    deriva(poli,grau,deriv);
    printf("DERIVADAS: \n");
    for(int i=0;i<grau;i++){
        printf("Derivada do grau %d: %.2lf\n",i+1,deriv[i]);
    }
    return 0;
}
void deriva(double * poli, int grau, double * deriv){
    for(int i=1;i<=grau;i++)//não pega o de grau 0, já que é uma constante e sua derivada é zero;
    {
        deriv[i-1]=poli[i]*i;
    }
}