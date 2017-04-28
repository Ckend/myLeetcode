//
//  main.cpp
//  237. Delete Node in a Linked List
//
//  Created by ckend on 2017/4/27.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
class Solution{
public:
    void deleteNode(ListNode *node){
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
