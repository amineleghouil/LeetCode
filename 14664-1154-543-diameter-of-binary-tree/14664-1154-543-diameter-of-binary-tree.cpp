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
    int number(TreeNode* root,int & a){
        if(!root)return 0;
        int x=number(root->left,a);
        int y=number(root->right,a);
        a=max(a,x+y);
        return 1+ max(x,y);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       int result = 0;
       number(root,result);
       return result;
        
    }
};