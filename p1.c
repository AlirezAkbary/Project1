#include <stdio.h>
#include<math.h>
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
    printf("Hello World !");
}
