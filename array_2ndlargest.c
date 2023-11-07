#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MIN;
    int smax = INT_MIN;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != max && arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    printf("second largest %d",smax);
    return 0;
}