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
    int goodNodes(TreeNode* root) {
        return helper(root,INT_MIN); 
    }
    int helper(TreeNode* root,int curMax){
        if(root==nullptr) return 0;
         // Assume the current node is not a good node.
        int rootAnswer=0;
        //if value is greater than curMax then mark as good node
        if(root->val>=curMax){
            rootAnswer=1;
            curMax=root->val;  
        }
        int lans=helper(root->left,curMax);
        int rans=helper(root->right,curMax);
        return lans+rans+rootAnswer;
    }
};