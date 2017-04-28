//
//  main.cpp
//  235. Lowest Common Ancestor of a Binary Search Tree
//
//  Created by ckend on 2017/4/26.
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
    TreeNode *lowestCommonAncestor(TreeNode *root,TreeNode *p, TreeNode *q){
        TreeNode *temp = root;
//        while (true) {
//            if(temp->val > p->val && temp->val > q->val)
//                temp = temp->left;
//            if(temp->val < p->val && temp->val < q->val)
//                temp = temp->right;
//            else
//                return root;
//        }
        if(temp->val > p->val && temp->val > q->val)
            temp = lowestCommonAncestor(temp->left, p, q);
        if(temp->val < p->val && temp->val < q->val)
            temp = lowestCommonAncestor(temp->right, p, q);
        return temp;

    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
