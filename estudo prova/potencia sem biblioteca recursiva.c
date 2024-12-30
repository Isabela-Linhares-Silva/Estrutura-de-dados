#include<stdio.h>
#include<stdlib.h>
int potencia(int base, int expoente);
int main()
{
    int base,expoente;
    scanf("%d",&base);
    scanf("%d",&expoente);
    printf("%d",potencia(base,expoente));

    return 0;
}
int potencia(int base, int expoente)
{
    if(expoente==0)
    {
        return 1;
    }
    else{
        return base*potencia(base,expoente-1);
        
    }
}