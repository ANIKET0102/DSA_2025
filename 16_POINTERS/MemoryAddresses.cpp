/*

To print the exact address of an element,
we use "AddressOf Operator  '&' ".


& operator
 Is used as Bitwise operator
 Also it is used for getting address


 Code :
 int main(){

    int a = 10;
    cout << &a <<endl;

    return 0;
}

Code :
int main()
{

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;

    cout << &ptr << endl;

    return 0;
}


Code :
Pointer to pointer :
int main()
{

    int a = 10;
    int *ptr = &a;

    int **parPtr = &ptr;

    cout << &ptr << endl;
    cout << parPtr << endl;

    return 0;
}

Dereferance Operator (*):

Value at address.
int main()
{

    int a = 10;
    int *ptr = &a;

    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << &a << endl;
    return 0;
}

Diagram is very imp in this lec.



NULL POINTER :
int main()
{

    int** ptr = NULL;
    cout << ptr <<endl;

    return 0;
}









*/
#include <iostream>
using namespace std;

int main()
{

    int **ptr = NULL;
    cout << ptr << endl;

    return 0;
}



