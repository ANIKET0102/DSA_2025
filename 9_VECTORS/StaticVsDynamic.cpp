/*
// Static Vs Dynamic Allocation of memory.

Static memory allocates at time of compile time.
Static memory stores in stack.
Fixed size of array.

Dynamic allocation takes place at run time.
Dynamic memory stores in heap.
We can increase the size of an array.

           Vector has 2 properties :
              |
        -------------
        |           |
       Size       capacity
        |           |
no. of elements    how much we can store in it

timeline 22:22 draw the diagram in book.

*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}