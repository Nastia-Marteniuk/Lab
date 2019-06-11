#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int siftUp(vector<int> &array, int i)
{
    int higher = -1;
    if  (((i % 2) != 0) && (((i - 2)/2) >= 0))
    {
        higher = (i - 2)/2;
    }
    else if (((i % 2) == 0) && (((i - 1)/2) >= 0))
    {
        higher = (i - 1)/2;
    }
    if ((higher != -1) && (array[higher] < array[i - 1]))
    {
        swap(array[higher], array[i - 1]);
        higher = siftUp(array, higher + 1);
    }
    else if ((higher != -1) && (array[higher] > array[i - 1]))
    {
        higher = i - 1;
    }
    return higher;
}

int main()
{
    int length;
    cin >> length;
    vector<int> array(length);
    for (int i = 0; i < length; ++i)
    {
        cin >> array[i];
    }
    int number;
    cin >> number;
    for (int j = 0; j < number; ++j)
    {
        int i, x;
        cin >> i >> x;
        array[i - 1] += x;
        int k = siftUp(array, i);
        k++;
        cout << k << endl;
    }
    for(int j = 0; j < length; ++j)
    {
        cout << array[j] << " ";
    }
    cout << endl;
}