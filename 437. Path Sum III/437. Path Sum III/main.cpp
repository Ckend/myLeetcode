//
//  main.cpp
//  437. Path Sum III
//
//  Created by ckend on 2017/5/22.
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
    int sumUp(TreeNode *root,int pre,int &sum){
        if(!root) return 0;
        int current = pre + root->val;
        return (current == sum) + sumUp(root->left, current, sum) + sumUp(root->right, current, sum);
    }
    int pathSum(TreeNode *root,int sum){
        if(!root) return 0;
        return sumUp(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
