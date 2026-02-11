#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declare a priority queue (Max-Heap: Largest element is at the top)
    priority_queue<int> pq1;

    // Push elements (they are automatically ordered)
    pq1.push(10);
    pq1.push(30);
    pq1.push(20);
    pq1.push(5);

    // Access the top element (the largest)
    cout << "Top (largest) element: " << pq1.top() << endl;

    // Remove the top element
    pq1.pop();
    cout << "New top after pop: " << pq1.top() << endl;

    // Print the size
    cout << "Priority Queue size: " << pq1.size() << endl;

    // Check if empty
    if (pq1.empty()) cout << "Empty" << endl;
    else cout << "Not Empty" << endl;

    // Insert using emplace
    pq1.emplace(50);

    // Print elements by extracting them (Destructive iteration)
    priority_queue<int> temp = pq1;
    cout << "Elements in priority order (high to low): ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // --- Min-Heap Declaration ---
    // (Smallest element at the top)
    priority_queue<int, vector<int>, greater<int>> minPq;
    minPq.push(10);
    minPq.push(30);
    minPq.push(5);
    cout << "Min-Heap Top: " << minPq.top() << endl;

    // Clear the priority queue
    pq1 = priority_queue<int>();

    // Re-initialize for algorithms via vector
    vector<int> v = {10, 50, 20, 40};
    for(int x : v) pq1.push(x);

    // Sum using vector conversion
    int sum = 0;
    priority_queue<int> sumTemp = pq1;
    while(!sumTemp.empty()) {
        sum += sumTemp.top();
        sumTemp.pop();
    }
    cout << "Sum of elements: " << sum << endl;

    return 0;
}