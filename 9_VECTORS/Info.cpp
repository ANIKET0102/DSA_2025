/*
It is as same as Arrays
They are dynamic in nature where as size in array is fixed.
To add vectors to program we have to add a hearder file named as '#include <vecotr>'.

STL : Std Temp Lib (it is like a toolbox where the pre code is defined/written)

vector is a tool is present in STL.

///////Vector Syntax :

1) vector<int> vec;
// int main(){
//     vector<int> vec;
//     cout << vec[0];

//     return 0;
// }

2) vector<int> vec = {1, 2, 3} => | 1 | 2 | 3 |
// int main(){
//     vector<int> vec = {1, 2, 4};
//     cout << vec[0];

//     return 0;
// }

3) vector<int> vec(3, 0) -> | 0 | 0 | 0 |
                ^  ^
                |  |
                |  |--idx -> Value
                |
                Size of the vector.
// int main()
// {
//     vector<int> vec (5, 0);
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     cout << vec[3] << endl;
//     cout << vec[4] << endl;

//     return 0;
// }


*****For Loop*****

// for(int i : vec){
//         cout << i << endl;
//     }


Example in char :
// int main()
// {
//     vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

//     for (char val : vec) // for each loop
//     {
//         cout << val << endl;
//     }

//     return 0;
// }





*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "size = " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "After push_back size = " << vec.size() << endl;

    vec.pop_back(); // 45
                    //  we dont need to mention the value in pop_back beacuse it knows
                    //  that it has to remove the last value only

    cout << "Front val : " << vec.front() << endl; // We have front in which we print the first value.
    cout << "Back val : " << vec.back() << endl; // We have back in which we print the last value.
    cout << "At val : " << vec.at(1) << endl; // We can print the val of an particular index. 

    for (int val : vec) // for each loop
    {
        cout << val << endl;
    }

    return 0;
}

/*

Funcitons in Vectors :
size
puch_back
pop-back
front
back
at

*/