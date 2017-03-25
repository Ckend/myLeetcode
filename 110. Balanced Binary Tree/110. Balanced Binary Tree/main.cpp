//
//  main.cpp
//  110. Balanced Binary Tree
//
//  Created by ckend on 2017/3/24.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
typedef struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
}TreeNode,*BT;
class Solution{
public:
//    int depth(TreeNode *root){
//        if (root == NULL) {
//            return 0;
//        }
//        return std::max(depth(root->left),depth(root->right))+1;
//    }
    int DFS_Solution(TreeNode *root){
        if (root==NULL) {
            return 0;
        }
        int leftHeight = DFS_Solution(root->left);
        if (leftHeight == -1) {
            return -1;
        }
        int rightHeight = DFS_Solution(root->right);
        if (rightHeight == -1) {
            return -1;
        }
        if(abs(leftHeight-rightHeight) > 1){
            return -1;
        }
        return std::max(leftHeight,rightHeight)+1;
    }
    bool isBalanced(TreeNode *root){
//        if (root == NULL) {
//            return 0;
//        }
//        int left = depth(root->left);
//        int right = depth(root->right);
//        return abs(left-right) <=1 && isBalanced(root->left) && isBalanced(root->right);
        return DFS_Solution(root) != -1;
    }
};
void createTree(BT &root){
    int x;
    std::cin >> x;
    root = new TreeNode(x);
    if (x == 0) {
        root = NULL;
    }
    if (root == NULL) {
        return;
    }
    createTree(root->left);
    createTree(root->right);
}
int main(int argc, const char * argv[]) {
    BT root;
    createTree(root);
    Solution y;
    std::cout<<y.isBalanced(root)<<std::endl;
    return 0;
}
