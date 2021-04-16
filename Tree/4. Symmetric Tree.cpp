/* Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.

Example 1:

Input:
         5
       /   \
      1     1
     /       \
    2         2
Output: True
Explanation: Tree is mirror image of
itself i.e. tree is symmetric */

bool isMirror(struct Node* root1, struct Node* root2)
{
    if(!root1 and !root2) return true;
    if(!root1 || !root2) return false;
    
    return (root1->data == root2->data) and (isMirror(root1->left, root2->right)) and (isMirror(root1->right, root2->left));
}

bool isSymmetric(struct Node* root)
{
	return isMirror(root, root);
}
