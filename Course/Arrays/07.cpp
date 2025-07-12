// Intersection of Two Arrays (Leetcode - 349)
// https://leetcode.com/problems/intersection-of-two-arrays/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> s(nums1.begin(), nums1.end());
    unordered_set<int> result;

    for (int i = 0; i < nums2.size(); i++)
    {
        if (s.find(nums2[i]) != s.end())
        {
            result.insert(nums2[i]);
        }
    }

    return vector<int>(result.begin(), result.end());
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

    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}