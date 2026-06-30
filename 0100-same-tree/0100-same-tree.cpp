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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        //check if both the nodes exists at each level
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;

        
        //if they exist check its values
        if(p->val==q->val){
        //check its left and right side
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        //if values are not same
        return false;
    }
};