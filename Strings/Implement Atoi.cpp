/*  Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

Note: You are not allowed to use inbuilt function.

Example 1:

Input:
str = 123
Output: 123

Example 2:

Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.  */

int atoi(string str)
{
    //Your code here
    int neg=0;
    int result=0;
    
    for(auto i : str)
    {
        if(i=='-')
        {
            neg=1;
            continue;
        }
        if(i>='0' and i<='9')
        result = result*10 + (i - '0');
        else
        return -1;
    }
    if(neg==1)
    return result*(-1);
    else
    return result;
}
