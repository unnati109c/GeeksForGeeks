/* Given a binary tree, print boundary nodes of the binary tree 
Anti-Clockwise starting from the root. The boundary includes left 
boundary, leaves, and right boundary in order without duplicate nodes. 
(The values of the nodes may still be duplicates.) */

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left, *right;

	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

struct node* insert(int val)
{
		return new node(val);
}

void LeftTree(node* root, vector <int>& ans)
{
    if(!root) return;
    if(root->left)
    {
        ans.push_back(root->data);
        LeftTree(root->left,ans);
    }
    else if(root->right)
    {
        ans.push_back(root->data);
        LeftTree(root->right,ans);
    }
}

void RightTree(node* root, vector <int>& ans)
{
    if(!root) return;
    if(root->right)
    {
        RightTree(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left)
    {
        RightTree(root->left,ans);
        ans.push_back(root->data);
    }
}

void Leaf(node* root, vector <int>& ans)
{
    if(!root) return;
    if(!root->left and !root->right)
        ans.push_back(root->data);
        
    Leaf(root->left, ans);
    Leaf(root->right,ans);
}

vector <int> printBoundary(node *root)
{
    vector<int>ans;
    if(!root)
    return ans;
    ans.push_back(root->data);
    LeftTree(root->left,ans);
    Leaf(root,ans);
    RightTree(root->right,ans);
    return ans;
}

int main()
{
	struct node* root = insert(26);
	root->left = insert(10);
	root->right = insert(3);

	root->left->left = insert(4);
	root->left->right = insert(6);

	root->right->left = insert(4);
	root->right->right = insert(3);
	
	vector<int>ans = printBoundary(root);
	for(auto i : ans)
	{
		cout<<i<<" ";
	}
	return 0;
}	

