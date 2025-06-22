// Find Smallest and Largest Elt in Array

#include <iostream>
using namespace std;

int largestNum(int arr[], int size)
{
    int result = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if (result < arr[i])
        {
            result = arr[i];
        }
    }

    return result;
}

int smallestNum(int arr[], int size)
{
    int result = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (result > arr[i])
        {
            result = arr[i];
        }
    }

    return result;
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

    int result1 = largestNum(arr, size);
    cout << "Largest Elt: " << result1 << endl;

    int result2 = smallestNum(arr, size);
    cout << "Smallest Elt: " << result2 << endl;
}