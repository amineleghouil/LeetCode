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
    int number(TreeNode* root){
        if(!root)return 0;
        int x=number(root->left);
        int y=number(root->right);
        return 1+ max(x,y);
    }
    bool isBalanced(TreeNode* root) {
        if (!root)
        return true ;
        if (abs(number(root->right)-number(root->left))>1) return false;
        return isBalanced(root->right) && isBalanced(root->left);
    }
};