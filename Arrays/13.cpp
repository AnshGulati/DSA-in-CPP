// Pair Sum in an Sorted Array

#include <iostream>
#include <vector>
using namespace std;

pair<int,int> pairSum(vector<int> &arr, int size, int target)
{
    int start = 0, end = size-1;
    int result = 0;

    while(start<end) {
        result = arr[start] + arr[end];

        if(target < result) end--;
        else if(target > result) start++;
        else return {start,end};
    }
}

int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int targetSum;
    cout << "Enter Target Sum: ";
    cin >> targetSum;

    pair<int,int> result = pairSum(arr, size, targetSum);
    cout << "The indices are: " << "(" << result.first << "," << result.second << ")" << endl;
}