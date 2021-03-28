/*Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.
Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)
*/

vector<long long> nextLargerElement(vector<long long> arr, int n){
        
	vector<long long>res(n, -1);

	stack<long long>st;
	for(long long i=0;i<n;i++)
	{
		while(!st.empty() and arr[st.top()]<arr[i])
		{
			res[st.top()]=arr[i]; //pushing the values into res
			st.pop();
		}
		st.push(i); // pushing index onto stack
	}
	return res;
}
