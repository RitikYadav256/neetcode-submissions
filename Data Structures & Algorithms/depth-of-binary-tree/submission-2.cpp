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
    int solve(int dep,TreeNode * root){

        if(root==nullptr) return 0;
        int l=solve(dep+1,root->left);
        int r=solve(dep+1,root->right);
        return 1+max(r,l);

    }
    int maxDepth(TreeNode* root) {
        
        return solve(0,root);
    }
};
