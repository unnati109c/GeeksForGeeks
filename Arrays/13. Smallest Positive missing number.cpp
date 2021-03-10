/*Given an array arr[] of size N, find the smallest positive number missing from the array.
Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
   
    int findMissing(int arr[], int n) { 
        sort(arr, arr+n);
        // for(int i=0;i<n;i++)
        // cout<<arr[i]<<" ";
        // cout<<endl;
        int k=0;
        while(arr[k]<0)
        k++;
        if(arr[k]!=0 and arr[k]!=1) return 1;  // -7 -5 8 9 then o/p : 1
        for(int i=k;i<n-1;i++)
        {
            if(arr[i]==arr[i+1]) continue;  // -9 -2 0 1 1 2 4 then o/p : 3
            if((arr[i]+1)!=arr[i+1])
            {
                return arr[i]+1;
            }
        }
        return arr[n-1]+1;
    }
};

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        cout<<ob.findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends