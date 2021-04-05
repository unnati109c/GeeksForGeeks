/*Input:
N = 5
Output: 
1 10 11 100 101
Explanation: 
Binary numbers from 1 to 5 are 1 , 10 , 11 , 100 and 101.*/

#include<bits/stdc++.h>
using namespace std;

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
	queue<string>q;
	vector<string>ans;
	q.push("1");
	
	while(n--)
	{
	    string s1=q.front();
	    q.pop();
	    ans.push_back(s1);
	    
	    string s2=s1;
	    
	    q.push(s1.append("0"));
	    q.push(s2.append("1"));
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
