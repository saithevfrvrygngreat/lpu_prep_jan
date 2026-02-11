#include <bits/stdc++.h>        
using namespace std;           

int main() {

    // Declare an empty vector of integers v1
    vector<int> v1;

    // Create a vector v2 with 3 elements, each initialized to 5
    vector<int> v2(3, 5);

    // Print all elements of vector v2
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;             

    // Initialize vector v3 with values 1, 2, and 3
    vector<int> v3 = {1, 2, 3};

    // Print all elements of vector v3
    for (auto x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Access and print the element at index 1 of v2 (no bounds checking)
    cout << v2[1] << endl;

    // Access and print the element at index 1 of v3 using at() (with bounds checking)
    cout << v3.at(1) << endl;

    // Modify the element at index 1 of v2
    v2[1] = 4;

    // Print the modified element of v2
    cout << v2[1] << endl;

    // Print the size of vector v2
    cout << "v2: " << v2.size() << endl;

    // Resize v2 to size 5 and initialize new elements with value 10
    v2.resize(5, 10);

    // Print the new size of v2
    cout << "V2: " << v2.size() << endl;

    // Add element 10 at the end of v3
    v3.push_back(10);

    // Check if v3 is empty
    if (v3.empty())
    {
        cout << "Vector is empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // Remove the last element from v3
    v3.pop_back();

    // Print all elements of v3 after pop_back
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Insert the value 999 at the end of vector v3
    v3.insert(v3.end(), 999);

    // Print all elements of v3 after insertion
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Create an iterator pointing to the element at index 2
    auto i = v3.begin() + 2;

    // Print the value pointed to by iterator i
    cout << *i << endl;

    // Erase elements from index 1 up to (but not including) index 3
    v3.erase(v3.begin() + 1, v3.begin() + 3);

    // Print all remaining elements of v3 using an iterator
    for (auto it = v3.begin(); it != v3.end(); it++)
    {
        cout << *it << " ";
    }
    cout<< endl;
    
    // Remove all elements from vector v3
    v3.clear();

    // Create and initialize a vector v3 = {1,2,3,4,5,6}
    v3 = {1, 2, 3, 4, 5, 6};

    // Use find() to search for value 4 in vector v3
    auto it = find(v3.begin(), v3.end(), 4);

    // Check if element was found if found print index 
    if (it != v3.end())
    {
        cout << "Element found at index: " << it - v3.begin() << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }


    // Reverse the elements of vector v3
    reverse(v3.begin(), v3.end());

    // Print vector after reversing
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Calculate the sum of all elements in v3
    int sum = accumulate(v3.begin(), v3.end(), 0);

    // Print the sum of elements
    cout << "Sum of elements: " << sum << endl;


    // Sort the vector v3 in ascending order
    sort(v3.begin(), v3.end());

    // Print vector after sorting
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Sort the vector v3 in descending order
    sort(v3.begin(), v3.end(), greater<int>());

    // Print vector after descending sort
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
