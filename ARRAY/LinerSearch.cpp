#include <iostream>
using namespace std;
/*

Time Complexity -> of LinearSearch is O(n) (Big Oh of 'n').

*/

int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target) // FOUND
        {
            return i;
        }
    }
    return -1; // NOT FOUND
}

int main()
{
    int arr[] = {4, 2, 3, 5, 7, 8, 1};
    int sz = 7;
    int target = 1;

    cout << linearSearch(arr, sz, target) << endl;

    return 0;
}