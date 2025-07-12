// Find sum of unique elements in Array (Leetcode - 1748)
// https://leetcode.com/problems/sum-of-unique-elements/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int sumOfUnique(vector<int> &arr, int size)
{
    unordered_map<int, int> mp;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }

    for (auto itr : mp)
    {
        if (itr.second == 1)
        {
            sum += itr.first;
        }
    }

    return sum;
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

    int result = sumOfUnique(arr, size);
    cout << "Sum of Unique Elts. in Array is: " << result;
}