#include<stdio.h>
void main()
{
    int n,a,d,sum;
    scanf("%d %d %d",&n,&a,&d);
    sum=n*(2*a+(n-1)*d);
    sum=sum/2;
    printf("%d",sum);
}
