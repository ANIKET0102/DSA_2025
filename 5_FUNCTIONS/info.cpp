//in programming if we want to do a task again and again then it is called as function 
// function looks like 

// returnType printHello(){
//     cout<<"Hello";
// }

#include <iostream>
using namespace std;

void printHello(){
    cout<<"Hello World"<<endl;
}

int main(){
/*
to call a funtion we have to worte "printHello();" this is called as funtion call or invoke,
if we are not calling a funtion then we will not receive an any kind of output


   returnType funName(type p1, type p2, ...){
       //do some work   
   }


   


*/

    printHello();

    return 0;
}