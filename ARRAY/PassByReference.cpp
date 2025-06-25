#include <iostream>
using namespace std;
/*

In C++ a reference is an alternative name for an object of function,
and its address is the address of the object or function it refers to.
For understanding we are calling it address here.

*/

void changeArr(int arr[], int size)
{
    cout << "in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 3 * arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    changeArr(arr, 3);

    cout << "in main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
