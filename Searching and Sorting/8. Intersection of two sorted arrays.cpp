/*The intersection of two arrays contains the elements common to both the arrays. 
The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
Explanation: 2 and 4 are only common elements in both the arrays.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(N + M).
*/

#include <bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int n, int m) 
    { 
        int i=0;
        int j=0;
        vector<int>ans(n+m);
        int k=-1;
        while(i<n and j<m)
        {
            while(i<n-1 and arr1[i]==arr1[i+1])
            {
                i++;
            }
            while(j<m-1 and arr2[j]==arr2[j+1])
            {
                j++;
            }
        
            if(arr1[i]==arr2[j])
            {
                ans[++k]=(arr1[i++]);
                j++;
            }
            else if(arr1[i]<arr2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        ans.resize(k+1);
        return ans;
    }

};

// { Driver Code Starts.
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        Solution ob;
        // Function calling 
        vector<int> v;
        v = ob.printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 
  // } Driver Code Ends