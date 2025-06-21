#include <iostream>
using namespace std;

int main()
{

    int a = 4, b = 8;
    cout << (a & b) << endl;
    cout << (5 - 2 * 6) << endl;
    cout << ((5 - 2) * 6) << endl; // To Override the precedence we use"()".
    cout << (4 * 5 % 2) << endl;   // rule of associativity (L to R)

    return 0;
}

/*

Bitwise & (AND)
0 0 0
0 1 0
1 0 0
1 1 1

Bitwise | (OR)
0 0 0
0 1 1
1 0 1
1 1 1

Bitwise ^ (XOR)
0 0 0
0 1 1
1 0 1
1 1 0





Operator Precedence
!, +, - (unary operators)      First    R to L
*, /, %                        Second   L to R
+, -                           Third    L to R
<, <=, >=, >                   Fourth   L to R
==, !=                         Fifth    L to R
&&                             Sixth    L to R
||                             Seventh  L to R
= (assignment operator)        Last     R to L

*/
