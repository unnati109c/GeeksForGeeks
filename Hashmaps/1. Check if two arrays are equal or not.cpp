#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution{
    public:

    bool check(vector<ll> arr1, vector<ll> arr2, int s1) {
    
        map<ll,ll>m;

        for(int i=0;i<s1;i++)
        {
          m[arr1[i]]++;
        }

        for(int i=0;i<s1;i++)
        {
          if(m.find(arr2[i])==m.end())
          {
            return false;
          }

          if(m[arr2[i]]==0)
          {
            return false;
          }

          m[arr2[i]]--;
        }

	      return true;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
