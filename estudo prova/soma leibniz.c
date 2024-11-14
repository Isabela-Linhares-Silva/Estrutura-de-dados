#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double pi(int n)
{
    int n;
    if(n==0) return 1;
    else{
        return (pow(-1,n)/(double)(2*(n+1)))+pi(n-1);
    }
}
int main()
{
    double recebe;
    recebe= pi(100);
    printf("%lf",recebe);
    return 0;
}