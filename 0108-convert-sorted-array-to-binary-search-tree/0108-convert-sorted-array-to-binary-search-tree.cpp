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
    TreeNode* solve(vector<int>arr, int l, int r){
        if(l>r) return NULL;
        int mid = l + (r-l)/2;
        TreeNode* newNode = new TreeNode(arr[mid]);
        newNode->left = solve(arr, l, mid-1);

        newNode->right= solve(arr, mid+1, r);
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return solve(nums, 0, nums.size()-1);
    }
};