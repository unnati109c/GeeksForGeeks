/*Given an array of size N-1 such that it can only contain distinct integers 
in the range of 1 to N. Find the missing element.

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
Example 2:

Input:
N = 10
A[] = {1,2,3,4,5,6,7,8,10}
Output: 9

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1). */


#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}// } Driver Code Ends


int MissingNumber(vector<int>& array, int n) {
    int sum=0;
    int s= (n*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
        sum+=array[i];
        //cout<<sum<<" ";
    }
    return (s-sum);
}