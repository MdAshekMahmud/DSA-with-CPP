#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int linearSearchWithHashTable(vector<int> &arr, int target)
{
    // Create a hash table to map each element to its position
    unordered_map<int, int> hashTable;
    for (int i = 0; i < arr.size(); i++)
    {
        hashTable[arr[i]] = i;
    }
    for (auto el : hashTable)
    {
        cout << el.first << " " << el.second << endl;
    }
    // Search for the target element in the hash table
    if (hashTable.find(target) != hashTable.end())
    {
        return hashTable[target];
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> arr = {1, 5, 3, 9, 2, 7};
    int target = 9;

    int index = linearSearchWithHashTable(arr, target);
    if (index != -1)
    {
        cout << "Found " << target << " at index " << index << endl;
    }
    else
    {
        cout << target << " not found in the list" << endl;
    }

    return 0;
}