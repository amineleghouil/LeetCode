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
    void traverse(TreeNode*root,int &sum){
        if(root==NULL) return;
        if(root->left){
            if(root->left->left==NULL && root->left->right==NULL){
                sum+=root->left->val;
            }
        }
        traverse(root->left,sum);
        traverse(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        traverse(root,sum);
        return sum;
    }
};