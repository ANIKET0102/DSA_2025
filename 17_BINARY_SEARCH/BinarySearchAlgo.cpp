#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> arr, int tar){
    int st=0, end=arr.size()-1;
    while(st <= end){ 
        int mid = st + (end - static) / 2;
        
        if(tar > arr[mid]){
            st = mid + 1;
        } else if(tar < arr[mid]){
            end = mid - 1;
        } else {
            return mid; 
        }
    }

    return -1;
}

int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 120;

    cout << binarySearch(arr1, tar1) << endl; 

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    // cout << binarySearch(arr2, tar2) << endl; 

    return 0;
}