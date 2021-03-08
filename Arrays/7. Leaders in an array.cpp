/*Given an array A of positive integers. Your task is to find the leaders in the array. 
An element of array is leader if it is greater than or equal to all the elements to its right side. 
The rightmost element is always a leader. 

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    
    public:
    vector<int> leaders(int arr[], int n){
        vector<int> ans;
        
        int max_from_right =  arr[n-1]; 
        ans.push_back(max_from_right); 
      
        for (int i = n-2; i >= 0; i--) 
        { 
            if (max_from_right <= arr[i])  
            {            
            	max_from_right = arr[i]; 
            	ans.push_back(max_from_right); 
            } 
        }  
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends

 