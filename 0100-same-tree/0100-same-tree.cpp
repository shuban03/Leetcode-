/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

   
    bool isSameTree(TreeNode* r1, TreeNode* r2) {

       if (r1 == nullptr && r2 == nullptr)
            return true;

        
        if (r1 == nullptr || r2 == nullptr)
            return false;

       
        if (r1->val != r2->val)
            return false;

        // Current nodes match, now both left and right subtrees
        // must also match
        return isSameTree(r1->left, r2->left) && isSameTree(r1->right, r2->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

       
        if (root == nullptr)
            return false;

        // Check if subtree starts at the current node
        if (isSameTree(root, subRoot))
            return true;

        // Otherwise, search in the left subtree OR right subtree
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};