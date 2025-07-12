// Concatenation of Array (leetcode - 1929)
// https://leetcode.com/problems/concatenation-of-array/description/

#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(2 * n);

    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = getConcatenation(nums);

    cout << "Concatenated array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
