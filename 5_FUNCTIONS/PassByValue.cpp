#include <iostream>
using namespace std;

// Pass by value
int sum(int a, int b)
{
    a = a + 10;
    b = b + 10;
    return a + b;
}

int main()
{
    int a = 5, b = 4;
    cout << sum(a, b) << endl;

    cout << a << endl;
    cout << b << endl;
    return 0;
}


