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
    private:
     private:
    void traverse(vector<int>&ans,TreeNode* root)
    {
        if(!root) return;
        traverse(ans,root->left);
        traverse(ans,root->right);
        ans.push_back(root->val);
        return;

    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
       traverse(ans,root);
       return ans; 
    }
};
