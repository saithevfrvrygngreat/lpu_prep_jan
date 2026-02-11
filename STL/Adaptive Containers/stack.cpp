#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declare an empty queue of integers
    queue<int> q1;

    // Add elements to the back of the queue (Enqueue)
    q1.push(10);
    q1.push(20);
    q1.push(30);

    // Access the front element (the one added first)
    cout << "Front element: " << q1.front() << endl;

    // Access the back element (the one added last)
    cout << "Back element: " << q1.back() << endl;

    // Modify the front element directly
    q1.front() = 15;
    cout << "Modified front: " << q1.front() << endl;

    // Remove the front element (Dequeue)
    q1.pop();
    cout << "New front after pop: " << q1.front() << endl;

    // Print the size of the queue
    cout << "Queue size: " << q1.size() << endl;

    // Check if the queue is empty
    if (q1.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    // Insert an element using emplace
    q1.emplace(40);

    // Create a second queue and swap
    queue<int> q2;
    q2.push(100);
    q1.swap(q2);
    cout << "Front of q1 after swap: " << q1.front() << endl;
    q1.swap(q2); // Swap back

    // Print all elements (requires copy iteration)
    // Queues do not support iterators or range-based loops
    queue<int> temp = q1;
    cout << "Queue elements (front to back): ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Clear the queue
    q1 = queue<int>();

    // Re-initialize for algorithms
    for (int x : {5, 2, 8, 1, 9}) {
        q1.push(x);
    }

    // Move to vector to perform find, sort, or sum
    vector<int> v;
    while(!q1.empty()) {
        v.push_back(q1.front());
        q1.pop();
    }

    // Use find()
    auto it = find(v.begin(), v.end(), 8);
    if (it != v.end()) cout << "Element 8 found" << endl;

    // Reverse and Sum
    reverse(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << endl;

    // Sort and restore
    sort(v.begin(), v.end());
    for (int x : v) q1.push(x);

    cout << "Queue front after sorting: " << q1.front() << endl;

    return 0;
}