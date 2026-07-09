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
    int helper(TreeNode* root,int& maxi){
        if(root==nullptr){return 0;}
        //max(0,helper) returns only +ve values
        int leftsum=max(0,helper(root->left,maxi));
        int rightsum=max(0,helper(root->right,maxi));
        //calculates maximum path sum
        maxi=max(maxi,leftsum+rightsum+root->val);
        //returns the best single path
        return root->val+max(leftsum,rightsum);

    } 
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;   //use INT_MIN not 0 as it contains -ve numbers
        helper(root,maxi);
        return maxi;
    }
};