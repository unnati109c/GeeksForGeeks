/*Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. 
Find whether element x is present in the matrix or not.

Input:
n = 3, m = 3, x = 62
matrix[][] = {{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}}
Output: 0
Explanation:
62 is not present in the matrix, so output is 0.

Input:
n = 1, m = 6, x = 55
matrix[][] = {{18, 21, 27, 38, 55, 67}}
Output: 1
Explanation: 55 is present in the matrix.

Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(1)
*/

#include<bits/stdc++.h> 
using namespace std;

class Solution{
  public:
    bool search(vector<vector<int> > mat, int n, int m, int x) 
    {
            int smallest = mat[0][0], largest = mat[n - 1][m - 1];
            if (x < smallest || x > largest)
                return 0;
           
            int i = 0, j = m - 1; //index of top-right element
            int flag=0;
            while (i < n && j >= 0) 
            {
                if (mat[i][j] == x) 
                {
                    //cout<<i<<" "<<j<<endl;
                    return 1;
                }
                if (mat[i][j] > x)
                    j--;
               
                // Check if mat[i][j] < x
                else
                    i++;
            }
            if(flag==0) return 0;
        }
};

// { Driver Code Starts.
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 

  // } Driver Code Ends