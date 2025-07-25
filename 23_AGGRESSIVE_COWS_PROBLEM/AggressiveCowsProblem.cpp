// Aggressive Cows Problem | DSA Placement Series - Binary Search |

// Problem Link: https://www.spoj.com/problems/AGGRCOW/

#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist)
{
    int cows = 1, lastStallPos = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] - lastStallPos >= minAllowedDist)
        {
            cows++;
            lastStallPos = arr[i];
        }

        if (cows == C)
        {
            return true; // All cows can be placed with the given distance
        }
    }
    return false; // Not enough cows can be placed with the given distance
}

int getDistance(vector<int> &arr, int N, int C)
{
    sort(arr.begin(), arr.end()); // Sort the positions of cows  //NlogN
    // st = 1, end = maxVal - minVal;

    int st = 1, end = arr[N - 1] - arr[0], ans = -1;

    while (st <= end) // O(log(Range) * N)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, N, C, mid))
        { // right
            ans = mid;
            st = mid + 1;
        }
        else
        { // left
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}