#include<stdio.h>
int fun1(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int fun2(int n)
{
    if(n ==0) return 0;
    return n%10+fun2(n/10);
}
int main()
{
    printf("%d\n", fun1(234));
    printf("%d\n", fun2(234));

}