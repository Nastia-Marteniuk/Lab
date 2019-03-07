#include <stdio.h>
#include <math.h>

int main()
{
    int length[2];
    for (int i = 0; i < 2; ++i)
    {
        scanf("%i", &length[i]);
    }
    int array1[length[0]];
    int array2[length[1]];
    for(int i = 0; i < length[0]; ++i)
    {
        scanf("%i", &array1[i]);
    }
    for (int i = 0; i < length[1]; ++i)
    {
        scanf("%i", &array2[i]);
    }
    int length1 = length[0];
    int length2 = length[1];

    for (int i = 0; i < length2; ++i)
    {
        int first, last, mid;
        first = 0;
        last = length1 - 1;
        int f = 0;
        while (first <= last)
        {
            mid = (first + last) / 2;
            if (array2[i] == array1[mid])
            {
                printf("YES\n");
                ++f;
                break;
            }
            else if (array2[i] < array1[mid])
            {
                last = mid - 1;
            }
            else // (array2[i] > array1[mid])
            {
                first = mid + 1;
            }
        }
        if (f == 0)
        {
            printf("NO\n");
        }
    }
}