#include<iostream>
#include<vector>
using namespace std;

/*

Brute Force Approch : 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int val : nums) {
            int freq = 0;

            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }
            if (freq > n / 2) {
                return val;
            }
        }
        return -1;
    }
};

More Optimized Approch : 
Sorting Method will be used.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        //sort
        sort(nums.begin(), nums.end());

        //freq count
        int freq = 1, ans = nums[0];
        for(int i=1;i<n; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else {
                freq = 1;
                ans = nums[i];
            }
            if(freq > n/2){
                return ans;
            }
        }
        return ans;
    }
    
};


Most Optimized Approch : 
Moore's Voting Algo : 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};





*/

int main(){



    return 0;
}