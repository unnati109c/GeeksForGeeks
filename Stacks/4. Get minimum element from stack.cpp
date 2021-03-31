/*You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.*/

#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty()) return -1;
   return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   if(s.empty()) 
    return -1;
    
   int topmost=s.top();
   s.pop();
   
   if(topmost<minEle)
   {
       int temp=minEle;
       minEle=2*minEle-topmost;
       return temp;
   }
   else
   {
   return topmost;
   }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       s.push(x);
       minEle=x;
       return;
   }
   else
   {
       if(x<minEle)
       {
           s.push(2*x-minEle);
           minEle=x;
       }
       else
       {
           s.push(x);
       }
   }
}
