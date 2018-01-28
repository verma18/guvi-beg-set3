#include<stdio.h>
void main()
{
    int n,i;
    int arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",arr[i],i);
    }
}
