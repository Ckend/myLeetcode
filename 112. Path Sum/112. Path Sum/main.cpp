//
//  main.cpp
//  112. Path Sum
//
//  Created by ckend on 2017/3/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Solution{
public:
    bool hasPathSum(TreeNode *root,int sum){
        if (root == NULL) {
            return false;
        }
        if (root->left == NULL && root->right == NULL && sum - root->val == 0) {
            return true;
        }
        return (hasPathSum(root->left, sum - root->val)||hasPathSum(root->right, sum - root->val));
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
