#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1. Store ALL indices for duplicate elements {Element, Index}
    multimap<int, int> multiIndex;
    vector<int> nums = {10, 50, 10, 20, 10};

    for (int i = 0; i < nums.size(); i++) {
        multiIndex.insert({nums[i], i});
    }

    // 2. Print all occurrences of key 10
    cout << "Indices where 10 appears: ";
    auto range = multiIndex.equal_range(10);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " "; // Prints 0, 2, 4
    }
    cout << endl;

    // 3. Count how many times 10 appears
    cout << "Count of 10: " << multiIndex.count(10) << endl;

    // 4. Finding the first occurrence
    auto it = multiIndex.find(50);
    if (it != multiIndex.end()) {
        cout << "First occurrence of 50 is at index: " << it->second << endl;
    }

    // 5. Lower and Upper bound (based on Key)
    auto lb = multiIndex.lower_bound(10); // Start of key 10
    auto ub = multiIndex.upper_bound(10); // Start of key 20 (first key > 10)

    // 6. Erase all instances of a key
    multiIndex.erase(10); 
    cout << "Size after erasing all 10s: " << multiIndex.size() << endl;

    return 0;
}