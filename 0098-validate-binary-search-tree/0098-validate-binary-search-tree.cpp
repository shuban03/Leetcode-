class Solution {
public:
    bool isValidBST(TreeNode* root) {

        // Initially there are no lower or upper limits.
        return helper(root, NULL, NULL);
    }

    bool helper(TreeNode* root, TreeNode* min, TreeNode* max) {

        // Empty tree is always a valid BST.
        if (root == NULL)
            return true;

        // Current node must be GREATER than the lower bound.
        if (min != NULL && root->val <= min->val)
            return false;

        // Current node must be LESS than the upper bound.
        if (max != NULL && root->val >= max->val)
            return false;

        // Left subtree:
        // Upper bound becomes current node.
        //
        // Right subtree:
        // Lower bound becomes current node.
        return helper(root->left, min, root) &&
               helper(root->right, root, max);
    }
};