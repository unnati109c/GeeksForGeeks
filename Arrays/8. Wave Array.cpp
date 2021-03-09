/*Given a sorted array arr[] of distinct integers. 
Sort the array into a wave-like array and return it. 
In other words, arrange the elements into a sequence such that 
a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after sorting it in wave form are 2 1 4 3 5.

n = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after sorting it in wave form are 4 2 8 7 10 9.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1). */

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    void convertToWave(int *arr, int n){
        
        for(int i=0;i<n-1;i+=2)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }
};

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends