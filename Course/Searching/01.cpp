// Binary Search Algorithm
// Only works for sorted arrays

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int recursiveBinarySearch(vector<int> arr, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target < arr[mid])
        {
            return recursiveBinarySearch(arr, target, start, mid - 1);
        }
        else if (target > arr[mid])
        {
            return recursiveBinarySearch(arr, target, mid + 1, end);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}