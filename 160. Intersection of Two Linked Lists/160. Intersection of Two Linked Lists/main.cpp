//
//  main.cpp
//  160. Intersection of Two Linked Lists
//
//  Created by ckend on 2017/4/3.
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
    ListNode *getIntersectionNode(ListNode *headA,ListNode *headB){
        ListNode *A = headA;
        ListNode *B = headB;
        if (A == NULL || B == NULL) {
            return NULL;
        }
        while (A != B) {
            A = A->next;
            B = B->next;
            if (A == B) {
                return A;
                //若不相同 会返回NULL
            }
            if (A == NULL) {
                A = headB;
            }
            if (B == NULL) {
                B = headA;
            }
            //如长度为1和长度为3，总是会得到长度相同的时候1+3 3+1
            //此时若下一个都是NULL，即两者不相等，则返回NULL。
        }
        return A;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
