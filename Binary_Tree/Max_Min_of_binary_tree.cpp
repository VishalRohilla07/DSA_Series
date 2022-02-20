pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
    if(root == NULL)
    {
        pair<int,int> p;
        p.first =INT_MAX;
        p.second =INT_MIN;
        return p;
    }
    pair<int, int> leftSubTree = getMinAndMax(root->left);
    pair<int, int> rightSubTree = getMinAndMax(root->right);
    int minimum = min(root->data, min(leftSubTree.first, rightSubTree.first));
    int maximum = max(root->data, max(leftSubTree.second, rightSubTree.second));
    pair<int, int> res;
    res.first = minimum;
    res.second = maximum;
    return res;   

}