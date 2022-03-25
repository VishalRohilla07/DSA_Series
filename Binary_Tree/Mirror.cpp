void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return;
    }
    
    mirrorBinaryTree(root -> left);
    mirrorBinaryTree(root -> right);
    
    swap(root -> left, root -> right);
    
    return;
}