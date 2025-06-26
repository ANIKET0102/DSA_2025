#include <iostream>
#include <climits>
using namespace std;

// Finding the Smallest and Largest Number in Array.
/*

In C++ the +infinity is written as INT_MAX (in uppercase only)


*/

int main()
{
    int nums[] = {5, 23, 33, -12, 88};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;





    for (int i = 0; i < size; i++) // min, max
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }

        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}
