#include <iostream>
using namespace std;

/*


arr[] = { 2, 4, 5, 6, 7, 11}
--> arr[] = {11, 7, 6, 5, 4, 2}... Reverse Array


We will used 2pointer approch in this particular problem.
Very important logic we are going to used

swap the elements

start = 0;++   moving forward
end = size - 1;-- moving backward

We are taking two pointers and 1st one is moving forward and
another one is moving is backward this is called as Two Pointer Approch.

while doing swaping these 2 cases can be happen.
even :  |_|_|_|_|
odd :   |_|_|_|

1) | 1 | 2 | 4 | 7 |
=> | 7 | 4 | 2 | 1 |

Timecomplexity for this problem will be O(n) Big Oh of 'n'.

In competetive exams we use different platforms where we use 'vector' instead of 'array' they both same.

Questions : 
1) WAF to calculate sum and product of all numbers in an array. 
2) WAF to swap the max & min number of an array. 
3) WAF to print all the unique values in an array. 
4) WAF to print intersection of 2 arrays. 


*/

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 5, 7, 8, 11, 16};
    int sz = 6;

    reverseArray(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << "  | " << arr[i] << " | ";
    }
    cout << endl;

    return 0;
}