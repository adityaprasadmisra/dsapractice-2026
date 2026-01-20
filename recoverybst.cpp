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
    void inorder(TreeNode* root, vector<TreeNode*>& nodes) {
    if (!root) return;
    inorder(root->left, nodes);
    nodes.push_back(root);
    inorder(root->right, nodes);
}
public:
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> nodes;
        inorder(root, nodes);

       vector<int> values;
      for (TreeNode* node : nodes)
          values.push_back(node->val);

        sort(values.begin(), values.end());

      for (int i = 0; i < nodes.size(); ++i)
          nodes[i]->val = values[i];

    }
};

// this is the way when the contraint (without changing its structure) is not given , then the answer will be very easy , we wil apply the logic for every bst its inorder should be a sorted array , we will find out the inorder of the given tree and just sort it and make it a bst



