#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Unordered Map {string -> int}
    unordered_map<string, int> uMap;

    // Frequency counting example
    vector<string> items = {"apple", "banana", "apple", "cherry"};
    for (string s : items) {
        uMap[s]++;
    }

    cout << "Unordered Map Frequencies:" << endl;
    for (auto const& [key, val] : uMap) {
        cout << key << ": " << val << endl;
    }

    // 2. Unordered Map {int -> int} for Index Mapping
    unordered_map<int, int> lastIndex;
    vector<int> nums = {5, 2, 5, 8, 2};
    for (int i = 0; i < nums.size(); i++) {
        lastIndex[nums[i]] = i; 
    }

    // 3. Finding a key
    if (uMap.find("banana") != uMap.end()) {
        cout << "Banana price: " << uMap["banana"] << endl;
    }

    // 4. Size and Clear
    cout << "Unique keys: " << uMap.size() << endl;
    uMap.clear();

    return 0;
}