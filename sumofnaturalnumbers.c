#include<stdio.h>
int fun1(int n)   // O(c)
{
    return n*(n+1)/2;
}
int fun2(int n)   // O(n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int fun3(int n)  // O(n2)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum++;
        }
    }
    return sum;

}
int fun4(int n)  // TC O(n) Aux space O(n)
{
    if(n==1) return 1;
    return n+fun4(n-1);

}
int main()
{
    printf("%d\n", fun1(4));
    printf("%d\n", fun2(4));
    printf("%d\n", fun3(4));
    printf("%d\n", fun4(4));
    

}