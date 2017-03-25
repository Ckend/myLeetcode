//
//  main.cpp
//  111. Minimum Depth of Binary Tree
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
    int forMin(TreeNode *root){
        if(root == NULL)
            return 0;
        int left = forMin(root->left);
        int right = forMin(root->right);
        return (left == 0 || right == 0)? left + right + 1 : std::min(left, right)+1;
    }
    int minDepth(TreeNode *root){
        if(root == NULL)
            return 0;
        return forMin(root)+1;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
