#include <bits/stdc++.h>        
using namespace std;           

int main() {

    // Declare an empty forward_list of integers fl1
    forward_list<int> fl1;

    // Create a forward_list fl2 with 3 elements, each initialized to 5
    forward_list<int> fl2(3, 5);

    // Print all elements of forward_list fl2
    for (int x : fl2)
    {
        cout << x << " ";
    }
    cout << endl;             

    // Initialize forward_list fl3 with values 1, 2, and 3
    forward_list<int> fl3 = {1, 2, 3};

    // Print all elements of forward_list fl3
    for (auto x : fl3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Access and print the first element of fl2 (No random access)
    cout << fl2.front() << endl;

    // Access and print the element at "index 1" of fl3 using an iterator
    cout << *next(fl3.begin(), 1) << endl;

    // Modify the first element of fl2
    fl2.front() = 4;

    // Print the modified element of fl2
    cout << fl2.front() << endl;

    // forward_list does not have a .size() member. 
    // We calculate distance from begin to end to show size.
    cout << "fl2: " << distance(fl2.begin(), fl2.end()) << endl;

    // Resize fl2 to size 5 and initialize new elements with value 10
    fl2.resize(5, 10);

    // Print the new calculated size of fl2
    cout << "fl2: " << distance(fl2.begin(), fl2.end()) << endl;

    // forward_list does not support push_back. 
    // We insert after the last element to mimic it.
    auto last_node = fl3.begin();
    while (next(last_node) != fl3.end()) last_node++;
    fl3.insert_after(last_node, 10);

    // Check if fl3 is empty
    if (fl3.empty())
    {
        cout << "Forward List is empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // forward_list does not support pop_back. 
    // We remove the first element (pop_front) as it is the standard O(1) removal.
    fl3.pop_front();

    // Print all elements of fl3 after operations
    for (int x : fl3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Insert the value 999 at the beginning of forward_list fl3
    fl3.push_front(999);

    // Print all elements of fl3 after insertion
    for (int x : fl3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Create an iterator pointing to the element at "index" 1
    auto i = next(fl3.begin(), 1);

    // Print the value pointed to by iterator i
    cout << *i << endl;

    // Erase the element AFTER the first element (erasing index 1)
    fl3.erase_after(fl3.begin());

    // Print all remaining elements of fl3 using an iterator
    for (auto it = fl3.begin(); it != fl3.end(); it++)
    {
        cout << *it << " ";
    }
    cout<< endl;
    
    // Remove all elements from forward_list fl3
    fl3.clear();

    // Create and initialize a forward_list fl3 = {1, 2, 3, 4, 5, 6}
    fl3 = {1, 2, 3, 4, 5, 6};

    // Use find() to search for value 4 in forward_list fl3
    auto it = find(fl3.begin(), fl3.end(), 4);

    // Check if element was found if found print distance (index)
    if (it != fl3.end())
    {
        cout << "Element found at index: " << distance(fl3.begin(), it) << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Reverse the elements of forward_list fl3
    fl3.reverse();

    // Print forward_list after reversing
    for (int x : fl3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Calculate the sum of all elements in fl3
    int sum = accumulate(fl3.begin(), fl3.end(), 0);

    // Print the sum of elements
    cout << "Sum of elements: " << sum << endl;

    // Sort the forward_list fl3 in ascending order
    fl3.sort();

    // Print forward_list after sorting
    for (int x : fl3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Sort the forward_list fl3 in descending order
    fl3.sort(greater<int>());

    // Print forward_list after descending sort
    for (int x : fl3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}