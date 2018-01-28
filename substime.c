#include<stdio.h>
#include<stdlib.h>
void main()
{
    int h1,m1,h2,m2,t,j;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);
    t=abs((h1*60+m1)-(h2*60+m2));
    j=t;
    t=t/60;
    j=j%60;
    printf("%d %d",t,j);

}
