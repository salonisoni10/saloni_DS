#include <stdio.h>
void display(int arr[], int n)
{
    printf("Array elements--->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int insert_pos(int arr[], int n, int x, int pos)
{
    if (pos < 0 || pos >= n)
    {
        printf(" Jyada hoshiyaar hai kya!!");
        return n;
    }
    for (int j = n - 1; j >= pos; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[pos] = x;
    return n + 1;
}
int delete(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == n)
    {
        printf(" Jyada hoshiyaari nahi!!!\n");
        return n;
    }
    for (int j = i; j <= n - 2; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}
int isSorted(int arr[], int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                flag=0;
                break;
            }

        }
        if(flag==0)
        {
            return 0;
        }
    }
    return 1;
}
int isSorted_optimized(int arr[], int n)
{
    for(int i=0;i<=n-2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int getMaxx(int arr[], int n)
{
    int maxx=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }
    }
    return maxx;
}
void reverse(int arr[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
int getsmax(int arr[], int n)
{
    int max=arr[0];
    int smax=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
            
        }
        if(arr[i]<max && arr[i]> smax)
        {
            smax=arr[i];
        }
    }
    return smax;
}
int main()
{
    int arr[10] = {10, 20, 155, 40, 150, 160};
    int n = 6;
    display(arr, n);
    // int x=18;
    // int ans=search(arr,n,x);
    // if(ans==-1)
    // {
    //     printf("Better luck next time!!");
    // }
    // else
    // {
    //     printf("%d is present at %d index\n", x, ans);
    // }
    // n=insert_pos(arr, n,100,4);
    // display(arr,n);
    // n = delete(arr, n, 130);
    // display(arr, n);
    // printf("%d  ", isSorted(arr,n));
    // printf("%d  ", isSorted_optimized(arr,n));
    // printf("Max--->%d", getMaxx(arr, n));
    // reverse(arr,n);
    // display(arr,n);
    printf("%d ", getsmax(arr, n));// getting second max



}