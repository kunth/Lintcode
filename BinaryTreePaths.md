http://www.lintcode.com/zh-cn/problem/binary-tree-paths/

Given a binary tree, return all root-to-leaf paths.

总耗时: 30 ms

``` cpp
/**
* Definition of TreeNode:
* class TreeNode {
* public:
*     int val;
*     TreeNode *left, *right;
*     TreeNode(int val) {
*         this->val = val;
*         this->left = this->right = NULL;
*     }
* }
*/
class Solution {
public:
   
    /**
     * @param root the root of the binary tree
     * @return all root-to-leaf paths
     */
    vector<string> binaryTreePaths(TreeNode* root) {
        // Write your code here
        vector<string>res;
        if (!root)
            return res;
        string path;
        dfs(path, res, root);
        return res;
    }
   
    void dfs(string path, vector<string>&res, TreeNode* root) {
        if (!path.empty()) {
            path += "->";
        }
        path += std::to_string(root->val);
        if (!root->left && !root->right) {
            res.push_back(path);
            return;
        }
        if (root->left) {
            dfs(path, res, root->left);
        }
        if (root->right) {
            dfs(path, res, root->right);
        }
    }
};
```

Tips:
dfs

