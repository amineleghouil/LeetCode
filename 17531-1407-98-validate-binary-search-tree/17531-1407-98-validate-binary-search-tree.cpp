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
     void addl(TreeNode* root,vector<int> &v){
        if(!root)return;
        addl(root->left,v);
        v.push_back(root->val);
        addl(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        addl(root,v);
        for(int i=1;i<v.size();i++){
            if(v[i]>v[i-1])continue;
            return false;
        }
        return true ;
    }
};