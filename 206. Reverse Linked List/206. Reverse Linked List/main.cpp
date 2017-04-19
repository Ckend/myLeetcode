//
//  main.cpp
//  206. Reverse Linked List
//
//  Created by ckend on 2017/4/19.
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
//    递归法:
//    ListNode *result(ListNode *head,ListNode *newHead){
//        if (head == NULL) {
//            return newHead;
//        }
//        ListNode *next = head->next;
//        head->next = newHead;
//        newHead = head;
//        return result(next, newHead);
//    }
//    ListNode *reverseList(ListNode *head){
//        return result(head, NULL);
//    }
//    迭代法
    ListNode *reverseList(ListNode *head){
        ListNode *newHead = NULL;
        while (head != NULL) {
            ListNode *next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }
        return newHead;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
