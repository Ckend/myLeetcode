//
//  main.cpp
//  155. Min Stack
//
//  Created by ckend on 2017/4/1.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <stack>
class MinStack{
private:
    std::stack<int> stack1;
    std::stack<int> stack2;
public:
    int min = 0;
    MinStack(){}
    void push(int x){
        stack1.push(x);
        if (stack2.empty() || x <= getMin()) {
            stack2.push(x);
        }
    }
    void pop(){
        if (stack1.top() == stack2.top()) {
            stack2.pop();
        }
        stack1.pop();
    }
    int top(){
        return stack1.top();
    }
    int getMin(){
        return stack2.top();
    }
};
int main(int argc, const char * argv[]) {
    MinStack a;
    a.push(0);
    a.push(-1);
    a.push(3);
    std::cout<<a.getMin()<<std::endl;
    return 0;
}
