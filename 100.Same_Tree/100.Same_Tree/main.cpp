//
//  main.cpp
//  100.Same_Tree
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
    bool isSameTree(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL)
            return true;
        else if(p==NULL || q==NULL)
            return false;
        else if(p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right,q->right);
        return false;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
