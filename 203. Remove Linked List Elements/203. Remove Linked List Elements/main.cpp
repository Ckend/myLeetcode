//
//  main.cpp
//  203. Remove Linked List Elements
//
//  Created by ckend on 2017/4/15.
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
    ListNode *removeElements(ListNode *head,int val){
        if (head == NULL) {
            return NULL;
        }
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next:head;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
