#include <iostream>
using namespace std;

/*
Data can be linear or hierarchial

Array Syntax :
int main()
{
    int marks[5] = {10, 20, 30, 40, 50};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}


//This is code is used to get the output by entering the values manually
int main()
{
    int marks[5] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << sizeof(marks) << endl;               // this is used to get the memory occupied by an array.
    cout << sizeof(marks) / sizeof(int) << endl; // this is used to get the size of array.

    // loops : 0 to size-1
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}



*/

// This is code is used to get the output from users input
int main()
{
    const int size = 5;
    int marks[size];

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    // loops : 0 to size-1
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}