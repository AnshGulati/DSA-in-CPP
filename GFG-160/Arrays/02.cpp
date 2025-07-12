// Move All Zeroes to End
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751

// User function template for C++
class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        // code here
        int count = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[count], arr[i]);
                count++;
            }
        }
    }
};