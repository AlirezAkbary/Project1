#include <stdio.h>
int findargmax(int a[], length)
{
    int i = 0, max = 0;
    for ( i = 0; i < length; i++)
        if (a[i] > a[max])
            max = i;
    return max;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int max = findargmax(arr, 5);
    printf("%d", max);

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

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", IsPrime(n));
//>>>>>>> 22ac1d7ad4d1a361d4c38112b54096c1869b0096
//}
