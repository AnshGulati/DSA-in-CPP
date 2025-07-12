// Single Number (Leetcode-136)
// https://leetcode.com/problems/single-number/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{

    // n^n = 0
    // n^0 = n

    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        result ^= nums[i];
    }

    return result;
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

    int result = singleNumber(arr);
    cout << "Unique Single Number: " << result << endl;
}