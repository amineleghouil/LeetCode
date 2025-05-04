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
    bool isSame(TreeNode* root1, TreeNode* root2){
        if (!root1 && !root2) return true;
        if (!root1 || !root2) return false;
        if (root1->val != root2->val) return false;
        return isSame(root1->left, root2->left) && isSame(root1->right, root2->right);
    }

    bool subroot(TreeNode* root, TreeNode* subroot1){
        if (!root) return false;
        if (isSame(root, subroot1)) return true;
        return subroot(root->left, subroot1) || subroot(root->right, subroot1);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return subroot(root, subRoot);
    }
};
