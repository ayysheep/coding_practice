#include <iostream>
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root==NULL)
        {
            return 0;
        }
        return (maxDepth(root->left)>maxDepth(root->right) ? maxDepth(root->left) : maxDepth(root->right))+1;
    }
};