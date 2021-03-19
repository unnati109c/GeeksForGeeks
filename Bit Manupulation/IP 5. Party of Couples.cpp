/*In a party of N people, each person is denoted by an integer. 
Couples are represented by the same number. Find out the only singe person in the party of couples.

Input: N = 5
arr = {1, 2, 3, 2, 1}
Output: 3
Explaination: Only the number 3 is single.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include<bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
    int findSingle(int n, int arr[]){
        int ans=arr[0];
        for(int i=1;i<n;i++)
        {
            ans^=arr[i];
        }
        return ans;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
}   // } Driver Code Ends