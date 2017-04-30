//
//  main.cpp
//  258. Add Digits
//
//  Created by ckend on 2017/4/29.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int addDigits(int num){
        return 1 + (num - 1) % 9;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
