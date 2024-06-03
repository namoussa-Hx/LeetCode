/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int rangeSumBST(struct TreeNode* root, int low, int high) 
{
    int res = 0 ;
    if(!root)
        return 0;
    if(root->val >= low && root->val <= high)
        res += root->val;
    if(low < root->val)
        res += rangeSumBST(root->left, low, high);
    if(high > root->val)
        res += rangeSumBST(root->right, low, high);
    return res;
}