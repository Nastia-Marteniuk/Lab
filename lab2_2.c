#include <stdio.h>

int main()
{
    int length;
    int array[1000];
    scanf("%d", &length);
    for (int i = 0; i < length; ++i)
    {
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < length - 1; ++j)
    {
        int max = array[0];
        int k = 0;
        for (int i = 1; i < length - j; ++i)
        {
            if (array[i] > max)
            {
                max = array[i];
                k = i;
            }
        }
        int tmp = array[length - 1 - j];
        array[length - 1 - j] = max;
        array[k] = tmp;
    }
    for (int i = 0; i < length; ++i)
    {
        printf("%d ", array[i]);
    }
}