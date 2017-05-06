//
//  main.cpp
//  367. Valid Perfect Square
//
//  Created by ckend on 2017/5/6.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool isPerfectSquare(int num){
        int i = 1;
        while (num > 0) {
            num -=i ;
            i = i + 2;
        }
        return num == 0;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
