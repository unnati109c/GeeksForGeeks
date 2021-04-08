/* You are given an array of integers. You need to print the non-repeated elements as they appear in the array.

Input:
n = 10
arr[] = {1,1,2,2,3,3,4,5,6,7}
Output: 4 5 6 7
Explanation: 4, 5, 6 and 7 are the only elements which is having only 1 frequency and hence, Non-repeating. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    vector<int> printNonRepeated(int arr[],int n)
    {
        
    	map<int,int>m;
    	vector<int>ans;
    	for(int i=0;i<n;i++)
    	{
    		m[arr[i]]++;
    	}
    	for(int i=0;i<n;i++)
    	{
    		if(m[arr[i]]==1) 
    			ans.push_back(arr[i]);
    	}
    	return ans;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    Solution obj;
	    v = obj.printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends
