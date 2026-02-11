#include <bits/stdc++.h>        
using namespace std;     

int main() {

    // Declare an empty deque of integers d1
    deque<int> d1;

    // Create a deque d2 with 3 elements, each initialized to 5
    deque<int> d2(3, 5);

    // Print all elements of deque d2
    for (int x : d2)
    {
        cout << x << " ";
    }
    cout << endl;

    // Initialize deque d3 with values 1, 2, and 3
    deque<int> d3 = {1, 2, 3};

    // Print all elements of deque d3
    for (auto x : d3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Access and print the element at index 1 of d2 (no bounds checking)
    cout << d2[1] << endl;

    // Access and print the element at index 1 of d3 using at() (with bounds checking)
    cout << d3.at(1) << endl;

    // Modify the element at index 1 of d2
    d2[1] = 4;

    // Print the modified element of d2
    cout << d2[1] << endl;

    // Print the size of deque d2
    cout << "d2: " << d2.size() << endl;

    // Resize d2 to size 5 and initialize new elements with value 10
    d2.resize(5, 10);

    // Print the new size of d2
    cout << "d2: " << d2.size() << endl;

    // Add element 10 at the end of d3
    d3.push_back(10);

    // Add element 0 at the front of d3 (Specific to Deque)
    d3.push_front(0);

    // Check if d3 is empty
    if (d3.empty())
    {
        cout << "Deque is empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // Remove the last element from d3
    d3.pop_back();

    // Remove the first element from d3 (Specific to Deque)
    d3.pop_front();

    // Print all elements of d3 after pops
    for (int x : d3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Insert the value 999 at the end of deque d3
    d3.insert(d3.end(), 999);

    // Print all elements of d3 after insertion
    for (int x : d3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Create an iterator pointing to the element at index 2
    auto i = d3.begin() + 2;

    // Print the value pointed to by iterator i
    cout << *i << endl;

    // Erase elements from index 1 up to (but not including) index 3
    d3.erase(d3.begin() + 1, d3.begin() + 3);

    // Print all remaining elements of d3 using an iterator
    for (auto it = d3.begin(); it != d3.end(); it++)
    {
        cout << *it << " ";
    }
    cout<< endl;
    
    // Remove all elements from deque d3
    d3.clear();

    // Create and initialize a deque d3 = {1,2,3,4,5,6}
    d3 = {1, 2, 3, 4, 5, 6};

    // Use find() to search for value 4 in deque d3
    auto it = find(d3.begin(), d3.end(), 4);

    // Check if element was found if found print index 
    if (it != d3.end())
    {
        cout << "Element found at index: " << it - d3.begin() << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Reverse the elements of deque d3
    reverse(d3.begin(), d3.end());

    // Print deque after reversing
    for (int x : d3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Calculate the sum of all elements in d3
    int sum = accumulate(d3.begin(), d3.end(), 0);

    // Print the sum of elements
    cout << "Sum of elements: " << sum << endl;

    // Sort the deque d3 in ascending order
    sort(d3.begin(), d3.end());

    // Print deque after sorting
    for (int x : d3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Sort the deque d3 in descending order
    sort(d3.begin(), d3.end(), greater<int>());

    // Print deque after descending sort
    for (int x : d3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}