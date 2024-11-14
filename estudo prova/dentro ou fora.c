#include<stdio.h>
#include<stdlib.h>
int dentro_ret(int x0,int y0,int x1, int y1,int x,int y)
{
    if(x0<x && x<x1 && y0<y && y<y1) return 1;
    else return 0;
}
int main()
{
    int x0,y0,x1,y1,x,y,recebe;
    printf("Informe X0 e Y0: ");
    scanf("%d %d",&x0,&y0);
    printf("Informe X1 e Y1: ");
    scanf("%d %d",&x1,&y1);
    printf("Informe X e Y: ");
    scanf("%d %d",&x,&y);
    recebe=dentro_ret(x0,y0,x1,y1,x,y);
    printf("%d",recebe);
    return 0;
}