/*Given an unsorted array Arr of N positive and negative numbers. 
Your task is to create an array of alternate positive and negative numbers 
without changing the relative order of positive and negative numbers.
Note: Array should start with positive number.
 
Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2

Input: 
N = 10
Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
Output:
5 -5 2 -2 4 -8 7 1 8 0 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        neg.push_back(arr[i]);
	        else
	        pos.push_back(arr[i]);
	    }
	    int k=0,l=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0 and k<pos.size())
	        arr[i]=pos[k++];
	        else if(1%2!=0 and l<neg.size())
	        arr[i]=neg[l++];
	        else if(k==pos.size() and l<neg.size())
	        arr[i]=neg[l++];
	        else
	        arr[i]=pos[k++];   
	    }
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends