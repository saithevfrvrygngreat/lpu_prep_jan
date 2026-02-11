#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declare a multiset (Sorted, allows duplicate values)
    multiset<int> ms1;

    // Insert elements
    ms1.insert(10);
    ms1.insert(30);
    ms1.insert(10); // Duplicate: allowed
    ms1.insert(20);

    // Print elements
    cout << "Multiset elements: ";
    for (int x : ms1) {
        cout << x << " ";
    }
    cout << endl;

    // Count occurrences of a specific value
    cout << "Count of 10: " << ms1.count(10) << endl;

    // Erase by value: WARNING - This removes ALL instances of 10
    // ms1.erase(10); 

    // Erase a single instance of a duplicate
    auto it_single = ms1.find(10);
    if (it_single != ms1.end()) {
        ms1.erase(it_single); 
    }
    cout << "After erasing one 10: ";
    for(int x : ms1) cout << x << " ";
    cout << endl;

    // Find a range of equal elements
    auto range = ms1.equal_range(10);
    // range.first is lower_bound, range.second is upper_bound

    // Swap multisets
    multiset<int> ms2 = {100, 200};
    ms1.swap(ms2);

    // Using emplace for efficiency
    ms1.emplace(300);

    // Size and Clear
    cout << "Final size: " << ms1.size() << endl;
    ms1.clear();

    return 0;
}