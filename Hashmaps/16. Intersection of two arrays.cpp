/* Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.
For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Input:
5 3
89 24 75 11 23
89 2 4

Output: 
1

Explanation: 
89 is the only element in the intersection of two arrays. */

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int NumberofElementsInIntersection (int a[], int b[], int n, int mm )
    {
        // Your code goes here
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        int count=0;
        for(int i=0;i<mm;i++)
        {
            if(m.find(b[i])!=m.end() and m[b[i]]>0)
            {
                count++;
                m[b[i]]=0;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
		Solution ob;
		cout << ob.NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  // } Driver Code Ends
