/* Given two arrays of integers A[] and B[] of size N and M, the task is to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum of two arrays equal.

 

Example 1:

Input: N = 6, M = 4
A[] = {4, 1, 2, 1, 1, 2}
B[] = (3, 6, 3, 3)
Output: 1
Explanation: Sum of elements in A[] = 11
Sum of elements in B[] = 15, To get same 
sum from both arrays, we can swap following 
values: 1 from A[] and 3 from B[] */

/* sumA - a + b = sumB - b + a
2b - 2a = sumB - sumA ....so, difference of sums is always even!
b - a = (sumB - sumA) / 2 */

int findSwapValues(int a[], int n, int b[], int m)
	{
        // Your code goes here
        int suma=0, sumb=0;
        set<int>s;
        for(int i=0;i<n;i++)
        {
        suma+=a[i];
        s.insert(a[i]);
        }
        
        for(int i=0;i<m;i++)
        {
        sumb+=b[i];
        }
        
       // cout<<suma<<" "<<sumb<<endl;
        int diff = std::abs(suma - sumb);
       //cout<<diff<<endl;
       if(diff%2) return -1;
       
        for(int i=0;i<m;i++)
        {
            
            if(s.find(((suma-sumb)/2) + b[i])!=s.end())
            {
                
                return 1;
            }
        }
        
        return -1;
        
        
	}
 
