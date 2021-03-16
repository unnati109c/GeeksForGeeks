/*Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively. 
Multiply A and B. 

Input:
n1 = 3, m1 = 2
A[][] = {{4, 8},
         {0, 2}
         {1, 6}}
n2 = 2, m2 = 2
B[][] = {{5, 2},
         {9, 4}}
Output: 92 40 18 8 59 26
Explanation:
Matrices are of size 3 x 2 and 2 x 2 which 
results in 3 x 2 matrix with elements as:
res[][] = {{92, 40},
           {18, 8}
           {59, 26}}

Expected Time Complexity: O(N1 * M1 * M2)
Expected Auxiliary Space: O(N1 * M2) for resultant matrix. 
*/

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& a, const vector<vector<int> >& b)
    {
        vector<vector<int>>result;
        
        int n1=a.size();
        int m1=a[0].size();
        
        int n2=b.size();
        int m2=b[0].size();
        
        if(m1==n2)
        {
            result.resize(n1);
            for(int i=0;i<n1;i++)
            {
                result[i].assign(m2,0);
                for(int j=0;j<m2;j++)
                {
                    int sum=0; 
                    for(int k=0; k<m1; k++)
                    {
                       sum += a[i][k] * b[k][j]; 
                    } 
                    result[i][j] = sum;
                }
                
            }
            
        }
        return result;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends