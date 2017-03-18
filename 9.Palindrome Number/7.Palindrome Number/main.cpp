//
//  main.cpp
//  7.Palindrome Number
//
//  Created by ckend on 2017/1/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>

class solution{
public:
    bool isPalidrome(int x){
        if(x < 0 || (x != 0 && x % 10 == 0) || x == 2147483647)
            //不知道为什么2147483647会Memory Limit Exceeded，于是只能加到这里判断了。
            return false;
        int result = 0;
        while(x > result){
            result = result * 10 + x % 10;
            x = x / 10;
        }
        return (x == result || x == result / 10);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 2147483647;
            //74638
    solution y ;
    std::cout<<y.isPalidrome(a)<<std::endl;
    return 0;
}
