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
  vector<int>v ;
    void display_inorder(TreeNode* temp ) {
        if(temp == nullptr )
            return; 

        if(temp->left != nullptr )display_inorder(temp->left) ;
        if(temp->right != nullptr ) display_inorder(temp->right) ;
                v.push_back(temp->val) ;

    } 
    vector<int> postorderTraversal(TreeNode* root) {
        display_inorder(root) ;
        return v ;
    }
};