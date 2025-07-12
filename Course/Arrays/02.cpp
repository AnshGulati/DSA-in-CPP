// Find Index of Smallest and Largest Elt in Array

#include <iostream>
using namespace std;

int indexOflargestNum(int arr[], int size)
{
    int maxIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    return maxIndex;
}

int indexOfsmallestNum(int arr[], int size)
{
    int minIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    }

    return minIndex;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result1 = indexOflargestNum(arr, size);
    cout << "Index of Largest Elt: " << result1 << endl;

    int result2 = indexOfsmallestNum(arr, size);
    cout << "Index of Smallest Elt: " << result2 << endl;
}