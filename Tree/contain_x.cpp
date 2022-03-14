#include<vector>

bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return false;
    }
    //base case
    if(root -> data == x) {
        return true;
    }
    bool flag = false;
    
    for(int i = 0; i < root -> children.size() ; i++) {
        flag = isPresent(root -> children[i], x);
        if(flag) {
            return flag;
        }    
    }
    
    return flag;
}