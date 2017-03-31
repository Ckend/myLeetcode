//
//  main.cpp
//  141. Linked List Cycle
//
//  Created by ckend on 2017/3/31.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}
};
class Solution{
public:
    bool hasCycle(ListNode *head){
        if (head == NULL || head->next == NULL) {
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != slow) {
            if (fast == NULL || fast->next == NULL) {
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
