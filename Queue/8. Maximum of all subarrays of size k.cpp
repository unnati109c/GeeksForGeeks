/*Input:
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector <int> max_of_subarrays(int *arr, int n, int k)
        {
            vector<int>answer;
            
            deque<int>dq;
            int i;
            for(int i=0;i<k;i++)
            {
                while((!dq.empty()) and (arr[i]>=arr[dq.back()]))
                {
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            
            for(;i<n;i++)
            {
                answer.push_back(arr[dq.front()]);
                
                while((!dq.empty()) and (dq.front()<=(i-k)))
                {
                    dq.pop_front();
                }
                
                while((!dq.empty()) and (arr[i]>=arr[dq.back()]))
                {
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            answer.push_back(arr[dq.front()]);
            return answer;
        }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
