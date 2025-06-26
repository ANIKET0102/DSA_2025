#include <iostream>
using namespace std;

int main()
{

    cout << sizeof(int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(signed int) << endl;
    cout << sizeof(unsigned int) << endl;

    return 0;
}

/*

  long : it will give the capacity of >=4Bytes
  short : reduce the size from 4bytes to 2 bytes
  long long : increase the size from 4bytes to 8 bytes
  signed : "int" is by default signed (it can save +ve and -ve numbers)
  unsigned : only save +ve id/numbers


*/