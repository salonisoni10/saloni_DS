#include<stdio.h>
 int getsmax(int arr[],int n)
{
    int max=arr[0];
    int smax=-1;
    for(int i=1;i<n;i++);
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if (arr[i]<max && arr[i]>smax)
        {
            smax=arr[i];
        }

    }
 return smax ;
}
int main ()
{
    int arr[i]={3,6,4,9,2};
    int n =sizeof(arr)/sizeof(arr[0]);
    printf("%d",getsmax(arr
}