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
    int height(TreeNode * root){
        if(root==nullptr){
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        int L_h=height(root->left)+1;
        int R_h=height(root->right)+1;
        bool k=false;
        if(abs(L_h - R_h) <= 1){
            k=true;
        }
        if(k && l && r){
            return true;
        }else{
            return false;
        }
       
    }
};
