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

    for (int j = 0; j < (length - 1); ++j)
    {
        for (int i = 1; i < length; ++i)
        {
            if (array[i] < array[i - 1])
            {
                int tmp = array[i];
                array[i] = array[i - 1];
                array[i - 1] = tmp;
            }
        }
    }
    for (int i = 0; i < length; ++i)
    {
        printf("%d ", array[i]);
    }
}