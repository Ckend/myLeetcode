//
//  main.cpp
//  404. Sum of Left Leaves
//
//  Created by ckend on 2017/5/12.
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
    int sumOfLeftLeaves(TreeNode *root){
        if(!root) return 0;
        if (root->left && !root->left->left && !root->left->right) {
            return root->left->val + sumOfLeftLeaves(root->right);
        }
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
