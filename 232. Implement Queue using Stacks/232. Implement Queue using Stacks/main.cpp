//
//  main.cpp
//  232. Implement Queue using Stacks
//
//  Created by ckend on 2017/4/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <stack>

class MyQueue{
public:
    std::stack<int>temp;
    std::stack<int>result;
    void push(int x){
        temp.push(x);
    }
    int pop(){
        int tmp = peek();
        result.pop();
        return tmp;
    }
    int peek(){
        if(result.empty()){
            while (temp.size()) {
                //注意这里如果用for要注意范围，不推荐用for,因为里面用到了pop。
                result.push(temp.top());
                temp.pop();
            }
        }
        return result.top();
    }
    bool empty(){
        return temp.empty() && result.empty();
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
