/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()==0){
            return NULL;
        }
        TreeNode *root = new TreeNode(pre[0]);
        vector<int>::iterator it = find(vin.begin(),vin.end(),pre[0]);
        vector<int> left_vin(vin.begin(),it);
        vector<int> left_pre(pre.begin()+1,pre.begin()+1+(it-vin.begin()));
        vector<int> right_vin(it+1,vin.end());
        vector<int> right_pre(pre.begin()+1+(it-vin.begin()),pre.end());
        root->left = reConstructBinaryTree(left_pre,left_vin);
        root->right = reConstructBinaryTree(right_pre,right_vin);
        return root;
    }
};
