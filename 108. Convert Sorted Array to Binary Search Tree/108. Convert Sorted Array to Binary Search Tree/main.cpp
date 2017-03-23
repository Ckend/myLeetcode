//
//  main.cpp
//  108. Convert Sorted Array to Binary Search Tree
//
//  Created by ckend on 2017/3/22.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>

typedef struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
}TreeNode,*Node;
class Solution{
public:
    Node sortedArrayToBST(std::vector<int>& nums){
        Node ans;
        if (nums.size() == 0)
            return NULL;
        else if(nums.size() == 1)
            return new TreeNode(nums[0]);
        int middle = (int)nums.size()/2;
        ans = new TreeNode(nums[middle]);
        std::vector<int>left(nums.begin(),nums.begin()+middle);
        std::vector<int>right(nums.begin()+middle+1,nums.end());
        ans->left = sortedArrayToBST(left);
        ans->right = sortedArrayToBST(right);
        return ans;
    }
};
void showup(Node &x){
    if (x) {
        showup(x->left);
        std::cout<<x->val<<std::endl;
        showup(x->right);
    }
}
int main(int argc, const char * argv[]) {
    std::vector<int> input;
    input.push_back(1);
    input.push_back(3);
    input.push_back(4);
    input.push_back(5);
    input.push_back(6);
    input.push_back(7);
    input.push_back(8);
    Solution y;
    Node answer = new TreeNode(0);
    answer = y.sortedArrayToBST(input);
    showup(answer);
    return 0;
}
