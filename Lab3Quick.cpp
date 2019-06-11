#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int> &array, int pointL, int pointR)
{
    int left = pointL;
    int right = pointR;
    int elected = rand() % (pointR - pointL + 1) + pointL;
    int element = array[elected];

    while(left <= right)
    {
        while(array[left] < element)
        {
            ++left;
        }
        while(array[right] > element)
        {
            --right;
        }
        if (left <= right)
        {
            swap (array[left], array[right]);
            ++left;
            --right;
        }
    }
    if (pointL < right)
    {
          quickSort(array, pointL, right);
    }
    if (left < pointR) 
    {
          quickSort(array, left, pointR);
    }
}

int main(void)
{
    int length;
    cin >> length;
    vector<int> array(length);
    for (int i = 0; i < length; i++)
    {
        scanf ("%d", &array[i]); 
    }

    quickSort(array, 0, length - 1);
    for (int i = 0; i < length; ++i)
    {
        cout << array[i] << " ";
    }  
    cout << endl;
}