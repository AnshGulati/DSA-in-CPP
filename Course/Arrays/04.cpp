// Find all unique elements in Array - Map Approach (O(n))

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findUniqueElts(vector<int> &arr, int size)
{

    unordered_map<int, int> mp;
    vector<int> result;

    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }

    for (auto itr : mp)
    {
        if (itr.second == 1)
        {
            result.push_back(itr.first);
        }
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

    vector<int> result;
    result = findUniqueElts(arr, size);

    cout << "Unique Elts. in Array are:" << endl;

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}