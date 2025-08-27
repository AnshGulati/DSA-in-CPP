// Majority Element (leetcode-169)
// https://leetcode.com/problems/majority-element/description/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        int cand = 0, vote = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (vote == 0)
            {
                cand = nums[i];
                vote = 1;
            }
            else if (cand == nums[i])
            {
                vote++;
            }
            else
            {
                vote--;
            }
        }

        return cand;
    }
};