// Majority Element (leetcode-169)
// https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Using Sorting (O(n logn))

// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     return nums[n/2];
// }

// Using Moore's Voting Algo (O(n))

// int majorityElement(vector<int> &nums)
// {
//     // Frequency of majority element will always be greater according to voting system.

//     int freq = 0, ans = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (freq == 0)
//         {
//             ans = nums[i];
//         }
//         if (ans == nums[i])
//         {
//             freq++;
//         }
//         else
//         {
//             freq--;
//         }
//     }

//     int count = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == ans)
//         {
//             count++;
//         }
//     }

//     if (count > nums.size() / 2)
//         return ans;
//     else
//         return -1;
// }

// Using Maps(O(n))

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    for (auto itr : mp)
    {
        if (itr.second > n / 2)
        {
            return itr.first;
        }
    }
    return -1;
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

    int result = majorityElement(arr);
    cout << "The majority elt is: " << result << endl;
}