/*Given a non-negative number represented as a list of digits, 
add 1 to the number (increment the number represented by the digits). 
The digits are stored such that the most significant digit is first element of array.

Input: 
N = 3
arr[] = {1, 2, 4}
Output: 
1 2 5
Explanation:
124+1 = 125, and so the Output

Input: 
N = 3
arr[] = {9,9,9}
Output: 
1 0 0 0
Explanation:
999+1 = 1000, and so the output

Expected Time Complexity:  O(N)
Expected Auxilliary Space: O(1)*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        if(arr[n-1]<9)
        {
            arr[n-1]+=1;
            return arr;
        }
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]==9)
            arr[i]=0;
            else
            break;
        }
        if(i>=0) 
        {
            arr[i]+=1;
        }
        else
        {
            arr.insert(arr.begin(),1);
        }
        return arr;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends