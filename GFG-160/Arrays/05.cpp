// Next Permutation
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/next-permutation5226

class Solution
{
public:
    void reverseArr(vector<int> &arr, int start, int end)
    {
        while (start < end)
        {
            swap(arr[start++], arr[end--]);
        }
    }

    void nextPermutation(vector<int> &arr)
    {
        // code here

        int n = arr.size() - 1;
        int index = n - 1;

        while (index >= 0 && arr[index] >= arr[index + 1])
        {
            index--;
        }

        if (index >= 0)
        {
            while (arr[n] <= arr[index])
            {
                n--;
            }
            swap(arr[index], arr[n]);
        }
        reverseArr(arr, index + 1, arr.size() - 1);
    }
};