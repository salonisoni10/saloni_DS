#include <stdio.h>
int fact1(int n) // O(n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int fact2(int n)  // TC O(n)
{
    if (n == 1)
        return 1;
    return n * fact2(n - 1);
}

int main()
{
    printf("%d\n", fact1(5));
    printf("%d\n", fact2(5));
}