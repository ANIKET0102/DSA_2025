#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // to find positive of negative
    // int n = 5;
    // cout<<(n>=0 ? "positive" : "negative")<<endl;
    // return 0;

    // loops
    //  while loop
    //  int count = 1;
    //  int n;
    //  cin >> n;
    //  while (count <= n)
    //  {
    //      cout << count << " " ;
    //      count += 1;
    //  }

    // for loop

    // int i;
    // int n;
    // cin>>n;
    // for (int i = n+1; i <= 10; i++)
    // {
    // cout<<i<<" ";
    // }

    // int n;
    // int sum = 0;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //    sum += i;
    // }
    // cout<<sum;

    // int n;
    // cin>>n;
    // int sum = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     if(i%2!=0){
    //         sum += i;
    //     }
    // }
    // cout<<sum;





    // int n = 7;
    // bool isPrime = true;

    // for (int i = 2; i < n - 1 ; i++)
    // {
    //     if (n%i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true)
    // {
    //     cout<<"PRIME"<<endl;
    // }else{
    //     cout<<"NON PRIME"<<endl;
    // }











    /*
    
    char         8 bits
    short        16 bits
    int          32 bit
    long long    63 bits
    float        32 bits
    double       64 bits
    bool         8 bits
    
    */
    



    auto a  = 10;
    auto k = "bit";
    cout<<a;

    cout <<typeid(a).name()<<endl;
    cout <<typeid(k).name()<<endl;



    return 0;
}