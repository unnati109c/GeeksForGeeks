/*Given an array arr[] of size N where every element is in the range 
from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

Input:
N = 5
arr[] = {4,0,2,1,3}
Output: 3 4 2 0 1
Explanation: 
arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1) */

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    void arrange(long long arr[], int n) 
    {
        for (int i=0; i < n; i++)
            arr[i] = arr[i] + (arr[arr[i]]%n)*n;
 
        for (int i=0; i<n; i++)
            arr[i] /= n;
    }
};

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  
