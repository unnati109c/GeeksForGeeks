/*Given a stack, the task is to sort it such that the top of the stack has the greatest element.*/

void insertinsortedstack(std::stack<int> &s, int x)
{
    if(s.empty() || s.top()<x)
    s.push(x);
    else
    {
        int temp=s.top();
        s.pop();
        insertinsortedstack(s,x);
        s.push(temp);
    }
}
void sortStack(std::stack<int> &s)
{
    if(s.size()>0)
   {
       int temp=s.top();
       s.pop();
       sortStack(s);
       insertinsortedstack(s,temp);
   }
}
void SortedStack :: sort()
{
   sortStack(this->s);
}
