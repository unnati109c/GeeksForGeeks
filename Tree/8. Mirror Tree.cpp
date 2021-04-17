void mirror(Node* root)
{
    if(!root) 
        return;
    mirror(root->left);
    mirror(root->right);
    swap(root->left, root->right);

}
