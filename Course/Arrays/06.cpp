// Find unique no of occurences in Array (Leetcode - 1207)
// https://leetcode.com/problems/unique-number-of-occurrences/

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    unordered_set<int> st;

    for (auto itr : mp)
    {
        if (st.find(itr.second) != st.end())
        {
            // Duplicate frequency found
            return false;
        }
        st.insert(itr.second);
    }

    return true;
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

    cout << (uniqueOccurrences(arr) ? "Yes" : "No") << endl;
}