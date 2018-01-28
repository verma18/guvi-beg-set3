#include<stdio.h>
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
void main()
{
    int arr[100000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);


}
void quicksort(int arr[],int low,int high)
{int q;
    if(low<high)
    {
        q=partition(arr,low,high);
        quicksort(arr,low,q-1);
        quicksort(arr,q+1,high);


    }
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high],temp;
    int j,i=low-1;
    for(j=0;j<high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }

    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
