/*Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Input: 
N = 9
Arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.

Input: 
N = 5
Arr[] = {1, 45, 47, 50, 5}
Output: 50
Explanation: Maximum element is 50.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int binarySearch(int arr[], int left, int right, int n) 
    { 
        while (left <= right) 
        { 
            int mid = left + (right-left)/2; 
            if(mid==0 || mid==n-1) return arr[mid];
            if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) 
                return arr[mid]; 
      
            if (arr[mid] < arr[mid+1]) 
                left=mid+1;
            else
                right=mid-1; 
        } 
      
        return -1; 
    } 
    	
	int findMaximum(int arr[], int n) {
	    return binarySearch(arr,0,n-1, n);
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}