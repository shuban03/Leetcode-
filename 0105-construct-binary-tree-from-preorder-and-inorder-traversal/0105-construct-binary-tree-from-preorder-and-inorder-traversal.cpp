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
// Find the index of the current root in the inorder array
    int search(vector<int>& inorder,int val, int left,int right){
        for(int i=left;i<=right;i++){
             if(inorder[i]==val){
                return i;
             }
        }
        return -1;
    }
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int& preIdx,int left,int right) {
        //if left<right there are no elements left in the range
        if(left>right){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[preIdx]);
        int mid=search(inorder,preorder[preIdx],left,right);
        preIdx++;
        //build left side form left to mid-1!
        root->left=helper(preorder,inorder,preIdx,left,mid-1);
        //build right side from mid+1 to right!
        root->right=helper(preorder,inorder,preIdx,mid+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx=0;
        return helper(preorder,inorder,preIdx,0,inorder.size()-1);
    }
};