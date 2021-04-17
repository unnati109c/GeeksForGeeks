bool isLeaf(Node* root)
{   
    if(root==NULL)
        return 0;
    if(root->left==NULL and root->right==NULL)
        return 1;
    return 0;
}

bool isSumTree(Node* root)
{
    int lst_sum=0;
    int rst_sum=0;

    if(root == NULL || isLeaf(root))
        return 1;

    if( (root->left) and (root->right) )
    {
        //check if lst sum + rst sum == root->data;
        if(root->left == NULL)
        lst_sum=0;
        else if (isLeaf(root->left))
        lst_sum= root->left->data;
        else
        lst_sum= 2 * (root->left->data);

        if(root->right == NULL)
        rst_sum=0;
        else if (isLeaf(root->right))
        rst_sum= root->right->data;
        else
        rst_sum= 2 * (root->right->data);

        return ((root->data)==(lst_sum+rst_sum));
    }
    return 0;

}
