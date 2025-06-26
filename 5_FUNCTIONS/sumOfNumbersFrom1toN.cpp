
#include <iostream>
using namespace std;

// Sum Of Numbers From 1 to N.
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

// Calculate N fctorial
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

//
void fun()
{
    int x = 25;
    cout << "x = " << x << endl;
}

int main()
{

    cout << fact(5) << endl;
    cout << sumN(100) << endl;
    fun();
    return 0;
}