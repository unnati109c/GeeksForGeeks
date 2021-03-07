/*Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)*/

/*
  If k is not multiple of n , for the last group we will have less than k elements left,
  we need to reverse all remaining elements. 
  If k = 1, the array should remain unchanged.
  If k >= n, we reverse all elements present in the array.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        
        for(int i=0;i<n;i+=k)
        {
            int l=i, r = min(i+k-1, n-1);
            while(l<r)
            {
                swap(arr[l++], arr[r--]);
            }
        }
    }
};

int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}
