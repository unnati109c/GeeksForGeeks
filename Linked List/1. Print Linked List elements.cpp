#include <iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*start;

void insert();

class Solution
{
    public:
    void display(Node *temp)
    {
      while(temp!=NULL)
      {
          cout<<temp->data<<" ";
          temp=temp->next;
      }
    }

    void display_recursion(Node *temp)
    {
      if(temp==NULL) return;
      
      cout<<temp->data<<" ";
      display(temp->next);
    }

    void display_recursion_reverse(Node *temp)
    {
      if(temp==NULL) return;
      
      display(temp->next);
      cout<<temp->data<<" ";
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      start=NULL;
      insert();
      Solution ob;
      ob.display(start);
      cout<<endl;
    }
    return 0;

}


 void insert()
 {
     int n,value;
     cin>>n;
     struct Node *temp;
     for(int i=0;i<n;i++)
     {
         cin>>value;
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }

  // } Driver Code Ends
