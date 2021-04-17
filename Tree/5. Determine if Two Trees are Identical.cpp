bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    if(!r1 and !r2) return true;
    if(!r1 || !r2) return false;

    return (r1->data == r2->data) and (isIdentical(r1->left, r2->left)) and (isIdentical(r1->right, r2->right));
}
