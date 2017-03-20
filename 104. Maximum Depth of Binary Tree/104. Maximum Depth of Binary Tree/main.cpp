//
//  main.cpp
//  104. Maximum Depth of Binary Tree
//
//  Created by ckend on 2017/3/20.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x),left(NULL),right(NULL){}
};
class Solution{
public:
    int maxdepth(TreeNode *root){
        if(root == NULL)
            return 0;
        return std::max(maxdepth(root->left), maxdepth(root->right)) + 1;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
