#include<stdio.h>

int array1[20000], array2[20000];

int main()
{
    int length[2];
    for (int i = 0; i < 2; ++i)
    {
        scanf("%d", &length[i]);
    }
    for(int i = 0; i < length[0]; ++i)
    {
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < length[1]; ++i)
    {
        scanf("%d", &array2[i]);
    }
    int length1 = length[0];
    int length2 = length[1];

    for (int i = 0; i < length2; ++i)
    {
        int first, last, mid;
        first = 0;
        last = length1 - 1;
        int min = 0, max = 0;
        while (first <= last)
        {
            mid = (first + last) / 2;
            if (array2[i] == array1[mid])
            {
                min = mid + 1;
                last = mid - 1;
            }
            else if (array2[i] > array1[mid])
            {
                first = mid + 1;
            } else {
                last = mid - 1;
            }
        }
        first = 0;
        last = length1 - 1;
        while (first <= last)
        {
            mid = (first + last) / 2;
            if (array2[i] == array1[mid])
            {
                max = mid + 1;
                first = mid + 1;
            }
            else if (array2[i] > array1[mid])
            {
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }

        if (min == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d %d\n", min, max);
        }
    }
}