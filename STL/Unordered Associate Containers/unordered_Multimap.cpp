#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Unordered Multimap {int -> string}
    // Useful for grouping values without needing them sorted
    unordered_multimap<int, string> umm1;

    // 2. Insert (Multiple values for same key)
    umm1.insert({1, "Alice"});
    umm1.insert({2, "Bob"});
    umm1.insert({1, "Charlie"});

    // 3. Accessing all values for Key 1
    cout << "Users with ID 1: ";
    auto range = umm1.equal_range(1);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // 4. Count and Erase
    cout << "Total entries for ID 1: " << umm1.count(1) << endl;
    
    // Erase only one specific entry
    auto it = umm1.find(1);
    if (it != umm1.end()) umm1.erase(it);

    return 0;
}