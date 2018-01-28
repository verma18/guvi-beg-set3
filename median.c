#include<stdio.h>
void main()
{

    int n,i,j,temp,med,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if
                (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(n%2==0)
    {
        med=arr[n/2]+arr[n/2+1];
        med=med/2;
    }
    else{
        med=arr[n/2];
    }
    printf("%d",med);
}
