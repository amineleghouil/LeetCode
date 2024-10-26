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
const int N=100001;
class Solution {
public:
    int val2H[N], removal[N];
    int h(TreeNode* root){
        if (!root) return -1;
        int x=root->val;
        if (val2H[x]!=-1) return val2H[x];
        return val2H[x]=1+max(h(root->left), h(root->right));
    }

    void dfs(TreeNode* root, int level, int maxLevel){
        if (!root) return;
        int x=root->val;
        removal[x]=maxLevel;
        dfs(root->left, level+1, max(maxLevel, 1+level+h(root->right)));
        dfs(root->right, level+1, max(maxLevel, 1+level+h(root->left)));
    }

    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        memset(val2H, -1, sizeof(val2H));
        memset(removal, -1, sizeof(removal));
        dfs(root, 0, 0);

        vector<int> ans(queries.size());
        int i=0;
        for(int q: queries)
            ans[i++]=removal[q];
        return ans;
    }
};