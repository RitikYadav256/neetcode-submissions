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
    int maxDia=0;
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDia;
    }
    int height(TreeNode * root){
        if(root==nullptr){
            return 0;
        }
        int Leftmax=height(root->left);
        int Rightmax=height(root->right);
        maxDia=max(maxDia,Leftmax+Rightmax);
        return max(Leftmax,Rightmax)+1;
    }
    
  
};
