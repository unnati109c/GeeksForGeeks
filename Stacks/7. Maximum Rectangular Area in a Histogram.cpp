/*Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. 
For simplicity, assume that all bars have the same width and the width is 1 unit.*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long>
class Solution
{
    public:
    
    vi previous_smaller_element(ll arr[], int n)
    {
        vi res(n, -1);
        
        stack<ll>st;
        for(ll i=0;i<n;i++)
        {
        	while(!st.empty() and arr[st.top()]>=arr[i])
        	{
        		st.pop();
        	}
        	res[i] = st.empty() ? -1 : st.top();
        	st.push(i); 
        }
        return res;
    }

    vi next_smaller_element(ll arr[], int n)
    {
    	vi res(n, n);
    	stack<ll>st;
    	for(ll i=0;i<n;i++)
    	{
    		while(!st.empty() and arr[st.top()]>arr[i])
    		{
    			res[st.top()]=i; 
    			st.pop();
    		}
    		st.push(i);
    	}
    	return res;
    }

    ll max(ll a, ll b)
    {
        if(a>b)
        return a;
        else return b;
    }

    
    long long getMaxArea(long long arr[], int n)
    {
      vi ps = previous_smaller_element(arr,n), ns = next_smaller_element(arr,n);
    	ll max_area = 0;
    
    	for (int i = 0; i < n; ++i)
    	{
    		ll b = ns[i] - ps[i] - 1;
    		ll l = arr[i];
    
    		max_area = max(l * b, max_area);
    	}
    	return max_area;
    }
};

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
