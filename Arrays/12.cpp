// Maximum Subarray Sum (Leetcode-53)
// https://leetcode.com/problems/maximum-subarray/description/

#include <iostream>
#include <vector>
using namespace std;



// Brute Force (O(n2))
// int maxSubArrSum(vector<int> &arr)
// {
//     int size = arr.size();
//     int maxSum = INT8_MIN;

//     for (int start = 0; start < size; start++)
//     {
//         int curSum = 0;
//         for (int end = start; end < size; end++)
//         {
//             curSum += arr[end];
//             maxSum = max(maxSum, curSum);
//         }
//     }

//     return maxSum;
// }



// Kadane's Algorithm (If the sum till now is neagtive then discard those elts. and set sum to 0.)
int maxSubArrSum(vector<int> &arr)
{
    int maxSum = INT8_MIN;
    int curSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        curSum += arr[i];
        maxSum = max(curSum, maxSum);

        // This condition is taken at last to handle array with all negative nos.
        if (curSum < 0)
            curSum = 0;
    }

    return maxSum;
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

    int result = maxSubArrSum(arr);
    cout << "Maximum Subarray Sum is: " << result << endl;
}