#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int siftDown(vector<int> &array, int i)
{
    if ((2*i + 1) >= array.size())
    {
        return i;
    }
    if ((2*i + 2) >= array.size())
    {
        if (array[i] >= array[2*i + 1])
        {
            return i;
        }
        else
        {
            swap(array[i], array[2*i + 1]);
            return (2*i + 1);
        }
    }
    int lower = -1;
    if ((array[i] < array[2*i + 1]) && (array[2*i + 1] >= array[2*i + 2]))
    {
        lower = 2*i + 1;
    }
    else if (array[i] < array[2*i + 2])
    {
        lower = 2*i + 2;
    }
    if (lower != -1)
    {
        swap(array[lower], array[i]);
        lower = siftDown(array, lower);
    }
    else if (lower == -1)
    {
        lower = i;
    }
    return lower;
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
        --i;
        array[i] -= x;
        int k = siftDown(array, i);
        k++;
        cout << k << endl;
    }
    for(int j = 0; j < length; ++j)
    {
        cout << array[j] << " ";
    }
    cout << endl;
}