#include <iostream>
#include <vector>
using namespace std;

/*

i) What is Sub Array?
-> Continous part of an given array is called as Sub Array.
| 1 | 2 | 3 | 4 | 5 |    --------------------------> n    subarray = n*(n+1)/2
 1, 2, 3, 4, 5
 12, 23, 34, 45   -> 2 element sub array
 123, 234, 345    -> 3 element sub array
 1234, 2345       -> 4 element sub array
 12345            -> 5 element sub array
/////    3:50    /////

*/
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i < end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}