/* Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

Input:
N = 8
A[] = {15,-2,2,-8,1,7,10,23}
Output: 5
Explanation: The largest subarray with sum 0 will be -2 2 -8 1 7. */

#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}

int maxLen(int A[], int n)
{
    int max_len=0, sum=0;
    map<int,int>m;
    
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        
        if(sum==0)
        {
            max_len=i+1;
        }
        
        else
        {
            if(m.find(sum)==m.end())
            {
                m[sum]=i;
            }
            else
            {
                max_len = max(max_len, i-m[sum]);
            }
        }
    }
    return max_len;
}
