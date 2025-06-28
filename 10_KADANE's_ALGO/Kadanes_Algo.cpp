#include <iostream>
#include <vector>
#include <climits>
using namespace std;
/*

Que ) 53

TimeComplexity will be  =  O(n)....linear TC

This Kadane's algo is a type of Dynamic Programming alog.

int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;

        for( int val : nums){
            currSum += val;
            maxSum = max(currSum, maxSum);

            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }



*/

int main()
{

    return 0;
}