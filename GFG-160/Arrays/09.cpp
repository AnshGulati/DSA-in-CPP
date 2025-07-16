// Minimize the Heights II
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/minimize-the-heights3351

class Solution
{
public:
    int getMinDiff(vector<int> &arr, int k)
    {
        int n = arr.size();

        if (n == 1)
            return 0;

        sort(arr.begin(), arr.end());

        int result = arr[n - 1] - arr[0];

        int minElt = arr[0] + k;
        int maxElt = arr[n - 1] - k;

        if (minElt > maxElt)
            swap(minElt, maxElt);

        for (int i = 0; i < n - 1; i++)
        {
            int subtractOpn = arr[i + 1] - k;
            int addOpn = arr[i] + k;

            if (subtractOpn < 0)
                continue;

            int currMin = min(minElt, subtractOpn);
            int currMax = max(maxElt, addOpn);

            result = min(result, currMax - currMin);
        }

        return result;
    }
};