/*
          1
        /    \
       2      3
      / \    / \
     4   5  6   7
    /     \    /
   8       9  10
  /
 11

*/

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left, *right;

	node(int val)
	{
		data=val;
		left=right=NULL;
	}
};

vector<int> DiagonalTraversal(struct node *root)
{
    queue<node*>q;
    vector<int>ans;

    if(!root)
    return ans;

    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        while(temp)
        {
          if(temp->left)
            q.push(temp->left);
          ans.push_back(temp->data);
          temp=temp->right;
        }
    }
    return ans;
}

int main()
{
	struct node* root = new node(1);

	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);

	root->right->left = new node(6);
	root->right->right = new node(7);

	root->left->left->left = new node(8);
	root->left->right->right = new node(9);
	root->right->right->left = new node(10);

	root->left->left->left->left = new node(11);

	vector<int>ans = DiagonalTraversal(root);
	for(auto i : ans)
	{
		cout<<i<<" ";
	}
	return 0;
}
