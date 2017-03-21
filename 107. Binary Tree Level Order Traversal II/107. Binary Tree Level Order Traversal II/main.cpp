//
//  main.cpp
//  107. Binary Tree Level Order Traversal II
//
//  Created by ckend on 2017/3/21.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
//输入3 9 20 0 0 15 7 0 0 0 0

typedef struct BitNode{
    BitNode *left;
    BitNode *right;
    int val;
    BitNode ():val(0),left(NULL),right(NULL){}
}BitNode,*BitTree;
void create(BitTree &T){
    T = new BitNode;
    int ch;
    std::cin>>ch;
    T->val = ch;
    if (T->val ==0) {
        T = NULL;
    }
    if (T == NULL) {
        return;
    }
    create(T->left);
    create(T->right);
}
class Solution{
//深度搜索
public:
    std::vector<std::vector<int> > ans;
    
    std::vector<std::vector<int> > levelOrderBottom(BitNode *root){
        dfs(root, 0);
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
    
    void dfs(BitNode *root ,int height){
        if(root == NULL)
            return;
        while (ans.size() <= height)
            ans.push_back(std::vector<int>());
        ans[height].push_back(root->val);
        dfs(root->left, height + 1);
        dfs(root->right, height + 1);
    }
};

int main(int argc, const char * argv[]) {
    BitTree T;
    create(T);
    if(T == NULL)
        std::cout<<"内存分配出错"<<std::endl;
    Solution y;
    std::vector<std::vector<int> > answer = y.levelOrderBottom(T);
    for(std::vector<std::vector<int> >::iterator i = answer.begin();i != answer.end();++i){
        std::vector<int>temp = *i;
        for (std::vector<int>::iterator j = temp.begin(); j!=temp.end(); ++j) {
            std::cout<<*j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
