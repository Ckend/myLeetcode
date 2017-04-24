//
//  main.cpp
//  226. Invert Binary Tree
//
//  Created by ckend on 2017/4/24.
//  Copyright © 2017年 ckend. All rights reserved.
//
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
#include <iostream>
class Solution{
public:
    TreeNode *invertTree(TreeNode *root){
        if(root == NULL)
            return NULL;
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
