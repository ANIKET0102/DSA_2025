#include <iostream>
using namespace std;

void sum()
{
    int a, b, c;
    cout << "Enter Numbers : " << endl;
    cin >> a >> b;
    c = a + b;
    cout << "The Sum is : " << c << endl;
}

int min(){
    int a, b;
    cin >> a >> b;
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main()
{

    cout<<"min = " << min() <<endl;


    return 0;
}

/* 

Redunduncy occurs when the 'n' number of lines used 
again and again, it reduces readiability to solve these 
problem we use 'functions' 

*/