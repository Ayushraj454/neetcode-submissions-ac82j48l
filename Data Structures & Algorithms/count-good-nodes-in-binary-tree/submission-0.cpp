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
    int count = 0;

    int goodNodes(TreeNode* root) {
        dfs(root, root -> val);
        return count;
    }

    void dfs(TreeNode*node , int curmax)
    {
        if(node == NULL)
        return;

        if(node -> val >= curmax)
        {
           count++;
           curmax = node -> val;
        }
        dfs(node -> left , curmax);
        dfs(node -> right , curmax);
    }
};
