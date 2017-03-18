//
//  main.cpp
//  83.Remove_Duplicates_from_Sorted_List
//
//  Created by ckend on 2017/3/16.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
struct ListNode{
    int val;
    ListNode *next;
}*x,*y,*z,*k;
ListNode *deleteDuplicates(ListNode *head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    head->next = deleteDuplicates(head->next);
    return head->val == head->next->val ? head->next:head;
}
int main(int argc, const char * argv[]) {
    x = new ListNode;
    y = new ListNode;
    z = new ListNode;
    k = new ListNode;
    x->val = 1;
    y->val = 1;
    z->val = 2;
    k->val = 3;
    x->next = y;
    y->next = z;
    z->next = k;
    k->next = NULL;
    ListNode *mypoint = deleteDuplicates(x);
    std::cout<<mypoint->next->val<<std::endl;
    return 0;
}
