#include <bits/stdc++.h>        
using namespace std;           

int main() {

    // Declare an empty list of integers l1
    list<int> l1;

    // Create a list l2 with 3 elements, each initialized to 5
    list<int> l2(3, 5);

    // Print all elements of list l2
    for (int x : l2)
    {
        cout << x << " ";
    }
    cout << endl;             

    // Initialize list l3 with values 1, 2, and 3
    list<int> l3 = {1, 2, 3};

    // Print all elements of list l3
    for (auto x : l3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Access and print the first element of l2 (List doesn't support [] index)
    cout << l2.front() << endl;

    // Access and print the second element of l3 using an iterator
    cout << *next(l3.begin(), 1) << endl;

    // Modify the first element of l2
    l2.front() = 4;

    // Print the modified element of l2
    cout << l2.front() << endl;

    // Print the size of list l2
    cout << "l2: " << l2.size() << endl;

    // Resize l2 to size 5 and initialize new elements with value 10
    l2.resize(5, 10);

    // Print the new size of l2
    cout << "l2: " << l2.size() << endl;

    // Add element 10 at the end of l3
    l3.push_back(10);

    // Add element 0 at the front of l3 (Specific to List/Deque)
    l3.push_front(0);

    // Check if l3 is empty
    if (l3.empty())
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // Remove the last element from l3
    l3.pop_back();

    // Remove the first element from l3
    l3.pop_front();

    // Print all elements of l3 after pops
    for (int x : l3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Insert the value 999 at the end of list l3
    l3.insert(l3.end(), 999);

    // Print all elements of l3 after insertion
    for (int x : l3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Create an iterator pointing to the element at "index" 2
    auto i = next(l3.begin(), 2);

    // Print the value pointed to by iterator i
    cout << *i << endl;

    // Erase elements from the second position up to the fourth
    auto first = next(l3.begin(), 1);
    auto last = next(l3.begin(), 3);
    l3.erase(first, last);

    // Print all remaining elements of l3 using an iterator
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        cout << *it << " ";
    }
    cout<< endl;
    
    // Remove all elements from list l3
    l3.clear();

    // Create and initialize a list l3 = {1, 2, 3, 4, 5, 6}
    l3 = {1, 2, 3, 4, 5, 6};

    // Use find() to search for value 4 in list l3
    auto it = find(l3.begin(), l3.end(), 4);

    // Check if element was found if found print distance (index)
    if (it != l3.end())
    {
        cout << "Element found at index: " << distance(l3.begin(), it) << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Reverse the elements of list l3 (List has its own member function for this)
    l3.reverse();

    // Print list after reversing
    for (int x : l3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Calculate the sum of all elements in l3
    int sum = accumulate(l3.begin(), l3.end(), 0);

    // Print the sum of elements
    cout << "Sum of elements: " << sum << endl;

    // Sort the list l3 in ascending order (List has its own sort)
    l3.sort();

    // Print list after sorting
    for (int x : l3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Sort the list l3 in descending order
    l3.sort(greater<int>());

    // Print list after descending sort
    for (int x : l3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}