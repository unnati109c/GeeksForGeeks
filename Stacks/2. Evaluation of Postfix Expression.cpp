/* Given string S representing a postfix expression, the task is to evaluate the expression 
and find the final value. Operators will only include the basic arithmetic operators like *, /, + and -.

Input: S = "231*+9-"
Output: -4
Explanation:
After solving the given expression, we have -4 as result.

Expected Time Complexity: O(|S|)
Expected Auixilliary Space: O(|S|)

*/

int evaluatePostfix(string S)
{
    stack<int>num;
    
    for(auto ch : S)
    {
        if(isdigit(ch))
        {
            num.push(ch-'0');
        }
        else
        {
            int one = num.top();
            num.pop();
            int two = num.top();
            num.pop();
            if(ch=='+') num.push(two+one);
            if(ch=='-') num.push(two-one);
            if(ch=='*') num.push(two*one);
            if(ch=='/') num.push(two/one);
            
            
        }
        //cout<<num.top()<<endl;
    }
    return num.top();
}