//
//  main.cpp
//  225. Implement Stack using Queues
//
//  Created by ckend on 2017/4/23.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <queue>
class MyStack{
public:
    std::queue<int> myque;
    void push(int x){
        myque.push(x);
        for (int i = 0; i < myque.size()-1; ++i) {
            myque.push(myque.front());
            myque.pop();
        }
    }
    int pop(){
        int x = myque.front();
        myque.pop();
        return x;
    }
    int top(){
        return myque.front();
    }
    bool empty(){
        return myque.empty();
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
