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
}
