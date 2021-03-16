/*Write a program to find the transpose of a square matrix of size N*N. 
Transpose of a matrix is obtained by changing rows to columns and columns to rows.

Input:
N = 4
mat[][] = {{1, 1, 1, 1},
           {2, 2, 2, 2}
           {3, 3, 3, 3}
           {4, 4, 4, 4}}
Output: 
{{1, 2, 3, 4},  
 {1, 2, 3, 4}  
 {1, 2, 3, 4}
 {1, 2, 3, 4}} 

Expected Time Complexity: O(N * N)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:     
    void transpose(vector<vector<int> >& matrix, int n)
    { 
       for (int i = 0; i < n; i++) 
            for (int j = i+1; j < n; j++) 
                swap(matrix[i][j], matrix[j][i]); 
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends