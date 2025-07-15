/*


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size() - 2;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            } else if (A[mid - 1] < A[mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1;
    }
};

 * Peak Index in a Mountain Array
 * https://leetcode.com/problems/peak-index-in-a-mountain-array/
 * This code finds the peak index in a mountain array using binary search.
 * The mountain array is defined such that it has a peak element which is greater than its neighbors

*/
