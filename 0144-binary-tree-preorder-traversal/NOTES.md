(Implicite stack)
void help(TreeNode* node, vector<int> &ans){
if(node == NULL) return;
ans.push_back(node->val);
help(node->left, ans);
help(node->right, ans);
}
vector<int> preorderTraversal(TreeNode* root) {
vector<int> ans;
// if(root == NULL) return;
help(root, ans);
return ans;
}