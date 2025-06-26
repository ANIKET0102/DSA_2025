#include <iostream>
using namespace std;

// Sum of Digits of number.

int sumOfDigits(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

// Calculate nCr binomial coefficient for n & r

int main()
{
    cout << "Sum of Digits : " << sumOfDigits(2356) << endl;

    return 0;
}