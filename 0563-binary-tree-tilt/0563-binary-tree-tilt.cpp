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
    int findTilt(TreeNode* root) {
        int res = 0;
        solve(root, res);
        return res;
    }
    int solve(TreeNode* root, int& res){
        if(root == NULL) return 0;

        int lt = solve(root->left, res);
        int rt = solve(root->right, res);
        res +=  abs(lt - rt);
        return root->val + lt + rt;
    }
};