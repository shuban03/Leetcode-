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
    int maxDepth(TreeNode* root) {
        //base case
        if(root==nullptr)return 0;
        //hey left whats ur height
        int left=maxDepth(root->left);
        //hey right whats ur height then
        int right=maxDepth(root->right);
        //now i have to think what is my height then (1+taller once height)
        return 1+max(left,right);
        
    }
};