//
//  main.cpp
//  21. Merge Two Sorted Lists
//
//  Created by ckend on 2017/1/27.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
struct ListNode{
    int val;
    ListNode *next = NULL;
}*x1,*x2,*x3,*x4,x11,x22,x33,x44;
class Solution{
public:
    ListNode *mergeTwoLists(ListNode *l1,ListNode *l2){
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        if(l1->val < l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else{
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }
};
int main(int argc, const char * argv[]) {
    x1 = &x11;
    x2 = &x22;
    x3 = &x33;
    x4 = &x44;
    x1->val = 8;
    x2->val = 9;
    x3->val = 7;
    x4->val = 11;
    x1->next = x3;
    x2->next = x4;
    Solution y;
    ListNode *answer;
    answer = y.mergeTwoLists(x1, x2);
    while(answer!=NULL){
        std::cout << answer->val<<std::endl;
        answer = answer->next;
    }
    return 0;
}
