// to print n natural number;
#include <stdio.h>

long fact(int n)
{
    if (n > 0)
        return (n * fact(n - 1));
    else
        return (1);
}
int main()
{
    int x;
    printf("Enter Number\n");
    scanf("%d", &x);
    printf("factorial is %d", fact(x));
    return 0;
}