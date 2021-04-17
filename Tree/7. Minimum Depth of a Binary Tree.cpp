int minDepth(Node *root) 
{
    if(root==NULL)
    return 0;

    if(!root->left and !root->right)
    return 1;

    int l = root->left!=NULL ? minDepth(root->left) : INT_MAX;
    int r = root->right!=NULL ? minDepth(root->right) : INT_MAX;

    return 1+min(l, r);
}
