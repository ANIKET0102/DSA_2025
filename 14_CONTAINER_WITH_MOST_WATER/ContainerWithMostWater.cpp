#include <iostream>
#include<vector>
using namespace std;
/*

   Brute Force Approch : 

   maxWater = 0
   // i -> left
   // j -> right
   for(i=0; i<n; i++){
       for(j=i+1; j<n; j++){
           w = j -  i
           ht = min(height[i], height[j])
           area = w * ht
           maxWater = max(maxWater, area)
       }
   }
   return maxWater;1

Que 11)
   int maxArea(vector<int>& height) {
        int maxWater = 0;
        for(int i=0; i<height.size(); i++){
            for(int j=i+1; j<height.size(); j++){
                int w = j-i;
                int ht = min(height[i], height[j]);
                int currWater = w * ht;

                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;    
    }

More Optimized Way : 
We will used 2 pointer approch.

container  =  w     *      ht
             |             |
             |             |    
          (r - l)      min(ht[l], ht[r])

lp min -> lp++  ..........left pointer
rp min -> rp--  .........right pointer

Dry run :
lp = 0, rp =n-1, maxWater = 0
while(lp < rp){
    w = rp - lp
    ht = min(ht[lp], ht[rp])
    currWater = w * ht
    maxWater = max(mw, currWt)

    ht[lp] < ht[rp] ? lp++ : rp--;
}


// 2 pointer approch is used mainly for to convert the timecomplexity of
   O(n^2) --> O(n).

More Optimized Way : 
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size() - 1;

        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w * ht;

            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }







*/

int main(){

    return 0;
}