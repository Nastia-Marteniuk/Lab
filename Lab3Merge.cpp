#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

void mergeSort(vector<int> &array)
{
	if (array.size() <= 1)
    {
		return;
	}
	int mid = (array.size() - 1) / 2;
	vector<int> left, right;
	for(int i = 0; i < array.size(); ++i)
    {
		if (i <= mid)
        {
			left.push_back(array[i]);
		}
        else
        {
			right.push_back(array[i]);
		}
	}
	mergeSort(left);
	mergeSort(right);
	int pointL = 0;
	int pointR = 0;
	for (int i = 0; i < array.size(); ++i)
    {
		if ((pointL < left.size()) && ((pointR == right.size()) || (left[pointL] <= right[pointR])))
        {
			array[i] = left[pointL];
			pointL++;
		}
        else
        {
			array[i] = right[pointR];
			pointR++;
		}
	}
}

int main()
{
    int length;
	scanf("%d", &length);
	vector<int> array(length);
	for(int i = 0; i < length; ++i)
    {
		scanf("%d", &array[i]);
	}
	mergeSort(array);
	for(int i = 0; i < length; ++i)
	{
        cout << array[i] << " ";
	}
	cout << endl;
}