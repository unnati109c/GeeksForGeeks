/*Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] such that all the relative positions of the elements 
in the first array are the same as the elements in the second array A2[ ].
Note: If elements are repeated in the second array, consider their first occurance only.

Input:
N = 11 
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
Output: 
2 2 1 1 8 8 3 5 6 7 9
Explanation: Array elements of A1[] are sorted according to A2[]. So 2 comes first then 1 comes, then comes 8, then finally 3 comes, now we append remaining elements in
sorted order. */

#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> a1, int n, vector<int> a2, int mm) 
    {
        map<int,int>m;
        vector<int>ans;
        for(auto i : a1)
        {
            m[i]++;
        }
        
        for(int i=0;i<mm;i++)
        {
            if(m.find(a2[i])!=m.end())
            {
                while(m[a2[i]]--)
                {
                    ans.push_back(a2[i]);
                }
                m[a2[i]]=0;
            }
        }
        
        for(auto i : m)
        {
            if(i.second!=0)
            {
                while(i.second--)
                {
                ans.push_back(i.first);
                }
            }
        }
        return ans;
    } 
};

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends
