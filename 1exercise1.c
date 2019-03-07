#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int number;
    scanf("%d", &number);
    int repeat = 0;
    for(int i = 0; i < size; ++i)
    {
        if(array[i] == number)
            repeat++;
    }
    printf("%i\n", repeat);
}