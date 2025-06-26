/*
//Single Number Problem

| 4 | 1 | 2 | 1 | 2 |
write unique numbers from above
ans should be => 4

Q.136)
i) We will used XOR Bitwise operator in this particular question
ii) XOR   =>   [1 1 0]
               [0 0 0]
               [1 0 1]
               [0 1 1]  

Linear Search Code on vector
Reverse code on vector



*/
#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans = ans ^ val;
    }

    return ans;
}