int countLeaves(Node* root)
{
  if(root==NULL) return 0;
  if(root->left == NULL and root->right==NULL)
      return 1;
  else
    return countLeaves(root->left) + countLeaves(root->right);
  
}
