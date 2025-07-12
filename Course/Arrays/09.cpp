// Intersection of Multiple Arrays (Leetcode - 2248)
// https://leetcode.com/problems/intersection-of-multiple-arrays/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<vector<int>> &nums)
{
    unordered_map<int, int> mp;
    vector<int> result;

    int n = nums.size();
    for (const auto &arr : nums)
    {
        unordered_set<int> seen; // Avoid counting duplicates in a single sub-array
        for (int elt : arr)
        {
            if (seen.insert(elt).second)
            {
                mp[elt]++;
            }
        }
    }

    for (auto &itr : mp)
    {
        if (itr.second == n)
        {
            result.push_back(itr.first);
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main()
{
    int m; // Number of subarrays
    cout << "Enter number of subarrays: ";
    cin >> m;

    vector<vector<int>> nums(m);

    for (int i = 0; i < m; i++)
    {
        int n; // Size of ith subarray
        cout << "Enter size of array " << i + 1 << ": ";
        cin >> n;

        nums[i].resize(n);
        cout << "Enter " << n << " elements: ";
        for (int j = 0; j < n; j++)
        {
            cin >> nums[i][j];
        }
    }

    vector<int> result = intersection(nums);

    cout << "Intersection: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
