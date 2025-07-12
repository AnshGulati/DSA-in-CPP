// Second Largest
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735

class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here

        int maxElt = INT_MIN;
        int result = -1;

        for (int i = 0; i < arr.size(); i++)
        {
            if (maxElt < arr[i])
                maxElt = arr[i];
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (result < arr[i] && arr[i] < maxElt)
                result = arr[i];
        }

        return result;
    }
};