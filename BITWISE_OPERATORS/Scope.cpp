#include <iostream>
using namespace std;

/*
There are two types of scopes
i) Local Scope
   Such as :  if-else, loops, functions, block of code{}
   they are not accessible out of scope

   Example for if-else:
     int main()
    {
      if (3 > 1)
    {
        int x = 10;
    }

      cout << x << endl;

      return 0;
    }

    Example for For-loop:
    int main()
    {
        for (int i = 0; i < 10; i++)
         {

         }
        cout << i << endl;
        return 0;
    }






ii) Global Scope
    access by anywhere in whole file.
    int x = 10;

int fun(){
    cout<<x<<endl;
}

int main()
{
    cout << x << endl;
    fun();
    return 0;
}



*/

