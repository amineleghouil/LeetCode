class Solution {
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        stack<TreeNode*> nodes;
        TreeNode* root = new TreeNode(preorder[0]);
        nodes.push(root);

        int preIndex = 1, postIndex = 0;

        while (!nodes.empty()) {
            TreeNode* current = nodes.top();

            if (current->val == postorder[postIndex]) {
                nodes.pop();
                postIndex++;
            } else {
                TreeNode* newNode = new TreeNode(preorder[preIndex++]);
                if (!current->left) {
                    current->left = newNode;
                } else {
                    current->right = newNode;
                }
                nodes.push(newNode);
            }
        }
        return root;
    }
};