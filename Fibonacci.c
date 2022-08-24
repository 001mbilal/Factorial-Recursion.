#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
        return (1);
    else
        return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int x;
    printf("Enter Number\n");
    scanf("%d", &x);
    printf("nth term is %d", fib(x));
}