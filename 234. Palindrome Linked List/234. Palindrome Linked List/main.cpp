//
//  main.cpp
//  234. Palindrome Linked List
//
//  Created by ckend xc 2017/4/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
struct ListNode{
    int val;
    ListNode *next;
};

class Solution{
public:
    bool isPalindrome(ListNode *head){
        if (head == NULL || head->next == NULL) {
            return true;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;
        while (slow) {
            if(slow->val != head->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
    ListNode *reverseList(ListNode *head){
        ListNode *result = NULL;
        ListNode *next = NULL;
        while (head != NULL) {
            next = head->next;
            head->next = result;
            result = head;
            head = next;
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    Solution y;
    ListNode *a = new ListNode();
    ListNode *b = new ListNode();
    a->val = 1234;
    b->val = 1234;
    a->next = b;
    b->next = NULL;
    std::cout<<y.isPalindrome(a)<<std::endl;
    return 0;
}
