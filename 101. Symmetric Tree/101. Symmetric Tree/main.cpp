//
//  main.cpp
//  101. Symmetric Tree
//
//  Created by ckend on 2017/3/19.
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
    bool isSymmetric(TreeNode *root){
        return isMirror(root,root);
    }
    bool isMirror(TreeNode *p1,TreeNode *p2){
        if(p1 == NULL && p2 == NULL)
            return true;
        else if(p1 == NULL || p2 == NULL)
            return false;
        return (p1->val == p2->val) && isMirror(p1->left, p2->right) && isMirror(p1->right, p2->left);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
