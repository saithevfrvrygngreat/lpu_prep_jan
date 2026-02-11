#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Unordered Set (Unique elements, No specific order)
    unordered_set<int> us1;
    us1.insert(10);
    us1.insert(20);
    us1.insert(10); // Duplicate ignored

    cout << "Unordered Set: ";
    for (int x : us1) cout << x << " "; 
    cout << endl;

    // 2. Unordered Multiset (Duplicates allowed, No specific order)
    unordered_multiset<int> ums1;
    ums1.insert(10);
    ums1.insert(10);
    ums1.insert(20);

    // Frequency check
    cout << "Count of 10 in Multiset: " << ums1.count(10) << endl;

    // 3. Find (O(1) average)
    if (us1.find(20) != us1.end()) {
        cout << "20 found in unordered set" << endl;
    }

    // 4. Erase
    us1.erase(10); // Removes 10
    ums1.erase(10); // Note: Erasing by value in multiset removes ALL 10s

    // 5. Bucket Information (Specific to unordered containers)
    cout << "Bucket count: " << us1.bucket_count() << endl;
    cout << "Load factor: " << us1.load_factor() << endl;

    return 0;
}