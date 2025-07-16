// Kadane's Algorithm
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/kadanes-algorithm-1587115620

class Solution
{
public:
    int maxSubarraySum(vector<int> &arr)
    {
        // Code here

        int currSum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            if (currSum < 0)
                currSum = 0;
            currSum += arr[i];
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};