#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int maxDistance(int arr[], int n)
    {
        map<int,int>m;

    	int max_dis=0;
    
    	for(int i=0;i<n;i++)
    	{
    		if(m.find(arr[i])==m.end())
    		{
    			m[arr[i]]=i;
    		}
    		else
    		{
    			max_dis=max(max_dis, (i-m[arr[i]]) );
    		}
    	}
    	return max_dis;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
