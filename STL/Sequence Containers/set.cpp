#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declare a set of integers (Stores unique elements in ascending order)
    set<int> s1;

    // Insert elements
    s1.insert(30);
    s1.insert(10);
    s1.insert(20);
    s1.insert(10); // Duplicate: will be ignored

    // Print all elements using range-based loop
    cout << "Set elements (sorted & unique): ";
    for (int x : s1) {
        cout << x << " ";
    }
    cout << endl;

    // Access size
    cout << "Set size: " << s1.size() << endl;

    // Check if empty
    if (!s1.empty()) cout << "Set is not empty" << endl;

    // Find an element
    // Returns an iterator to the element if found, else returns s1.end()
    auto it = s1.find(20);
    if (it != s1.end()) {
        cout << "Element 20 found!" << endl;
    }

    // Count occurrence (In set, result is always 0 or 1)
    if (s1.count(30)) {
        cout << "30 exists in the set" << endl;
    }

    // Lower Bound: First element >= value
    auto lb = s1.lower_bound(15);
    cout << "Lower bound of 15: " << *lb << endl;

    // Upper Bound: First element > value
    auto ub = s1.upper_bound(20);
    cout << "Upper bound of 20: " << *ub << endl;

    // Erase an element by value
    s1.erase(20);

    // Erase by iterator
    auto it_del = s1.find(10);
    if (it_del != s1.end()) s1.erase(it_del);

    // Clear the set
    s1.clear();

    // Re-initialize for algorithms
    s1 = {5, 1, 9, 3};

    // Calculate sum (requires <numeric>)
    int sum = accumulate(s1.begin(), s1.end(), 0);
    cout << "Sum of set: " << sum << endl;

    // Set is already sorted, but we can reverse display using reverse_iterator
    cout << "Set in descending order: ";
    for (auto rit = s1.rbegin(); rit != s1.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}