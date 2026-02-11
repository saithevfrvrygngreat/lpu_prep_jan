#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1. Frequency Counting: Map stores {Element, Frequency}
    map<int, int> freqMap;
    vector<int> numbers = {10, 20, 10, 30, 20, 10};

    for (int x : numbers) {
        freqMap[x]++; // Increments value for key x; creates it if it doesn't exist
    }

    cout << "Frequency of elements:" << endl;
    for (auto const& [element, count] : freqMap) {
        cout << "Value: " << element << " occurs " << count << " times" << endl;
    }

    // 2. Index Mapping: Map stores {Element, Last Seen Index}
    map<int, int> indexMap;
    int arr[] = {5, 8, 2, 5, 9};
    
    for (int i = 0; i < 5; i++) {
        indexMap[arr[i]] = i; // Overwrites with the latest index
    }

    cout << "\nLast seen index of 5: " << indexMap[5] << endl;

    // 3. Finding and accessing keys
    int target = 20;
    if (freqMap.find(target) != freqMap.end()) {
        cout << "Target " << target << " exists in freqMap." << endl;
    }

    // 4. Erase a specific key
    freqMap.erase(30);

    // 5. Size of the map (number of unique keys)
    cout << "Unique elements in freqMap: " << freqMap.size() << endl;

    // 6. Clear map
    freqMap.clear();

    return 0;
}