#include <stdio.h>

int IsPrime(int n)
{
    int i, sqrt;
    sqrt = sqrt(n);
    for(i = 2; i <= sqrt; i++)
    {
        if(n % i == 0)
            return 0;

    }
    return 1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", IsPrime(n));
}
