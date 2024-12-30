#include<stdio.h>
#include<stdlib.h>
int quadrante(float x, float y); 
int main()
{
    float x,y;
    do{
        scanf("%f%f",&x,&y);
        printf("%d",quadrante(x,y));
        printf("\n");
    }while(x!=0 && y!=0);
    
    return 0;
}
int quadrante(float x, float y)
{
    if(x>0 && y>0)
    {
        return 1;
    }
    if(x<0 && y>0)
    {
        return 2;
    }
    if(x<0 && y<0)
    {
        return 3;
    }
    if(x>0 && y<0)
    {
        return 4;
    }
    return 0;
}
