//
// Created by vva on 4/13/2024.
//

class Solution {
public:
    bool isLeaf(TreeNode *root) {
        return root != NULL && root->left == NULL && root->right == NULL;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL)
            return 0;

        if(isLeaf(root->left))
            return root->left->val + sumOfLeftLeaves(root->right);

        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};