// Find Missing and Repeated Values (Leetcode - 2965)
// https://leetcode.com/problems/find-missing-and-repeated-values/description/

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {

        vector<int> result(2);
        unordered_set<int> st;
        int n = grid.size();
        int actualSum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                actualSum += grid[i][j];
                if (st.find(grid[i][j]) != st.end())
                {
                    result[0] = grid[i][j];
                }
                st.insert(grid[i][j]);
            }
        }

        int expSum = ((n * n) * (n * n + 1)) / 2;
        result[1] = expSum - actualSum + result[0];

        return result;
    }
};