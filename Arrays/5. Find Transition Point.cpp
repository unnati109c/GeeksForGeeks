/*Given a sorted array containing only 0s and 1s, find the transition point. 

Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)*/

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid]==1 and arr[mid-1]==0)
        return mid;
        else if (arr[mid]==1)
        {
            ans = mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}