//
//  main.cpp
//  257. Binary Tree Paths
//
//  Created by ckend on 2017/4/28.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Soluton{
public:
    void binaryTreePathsfound(TreeNode *root,std::vector<std::string> &result,std::string first){
        if (root->left==NULL && root->right == NULL) {
            result.push_back(first);
            return;
        }
        if(root->left)
            binaryTreePathsfound(root->left,result,first + "->" + std::to_string(root->left->val));
        if (root->right)
           binaryTreePathsfound(root->right,result,first + "->" + std::to_string(root->right->val));
    }
    std::vector<std::string> binaryTreePaths(TreeNode *root){
        std::vector<std::string> result;
        if(root == NULL)
            return result;
        binaryTreePathsfound(root, result, std::to_string(root->val));
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
