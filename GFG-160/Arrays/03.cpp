// Reverse an Array
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        // code here
        int start = 0;
        int end = arr.size() - 1;

        while (start < end)
        {
            swap(arr[start++], arr[end--]);
        }
    }
};