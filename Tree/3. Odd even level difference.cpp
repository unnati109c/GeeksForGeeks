// Given a Binary Tree. Find the difference between the sum of node values at even levels and the sum of node values at the odd levels.

int getLevelDiff(Node *root)
    {
        if(root==NULL)
            return 0;
        return root->data - getLevelDiff(root->left) - getLevelDiff(root->right);
    }
};
