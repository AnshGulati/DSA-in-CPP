// Intersection of Two Arrays II (Leetcode - 350)
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;
    vector<int> result;

    for (int i = 0; i < nums1.size(); i++)
    {
        mp[nums1[i]]++;
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        if (mp[nums2[i]] > 0)
        {
            result.push_back(nums2[i]);
            mp[nums2[i]]--;
        }
    }

    return result;
}

int main()
{
    int size1;
    cin >> size1;

    vector<int> nums1(size1);
    for (int i = 0; i < size1; i++)
    {
        cin >> nums1[i];
    }

    int size2;
    cin >> size2;

    vector<int> nums2(size2);
    for (int i = 0; i < size2; i++)
    {
        cin >> nums2[i];
    }

    vector<int> result = intersect(nums1, nums2);

    cout << "Intersection: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}