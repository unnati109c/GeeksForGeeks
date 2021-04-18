bool isBalanced(Node *root)
{
    if(!root) return 1;
    
    int l = height(root->left);
    int r = height(root->right);
    
    if((abs(l-r)<=1) and isBalanced(root->left) and isBalanced(root->right))
    {
        return true;
    }
    return false;
}
