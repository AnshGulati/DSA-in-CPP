// Majority Element II
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/majority-vote

class Solution
{
public:
    vector<int> findMajority(vector<int> &arr)
    {
        // Code here

        vector<int> result;
        map<int, int> mp;
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (auto itr : mp)
        {
            if (itr.second > n / 3)
                result.push_back(itr.first);
        }

        return result;
    }
};