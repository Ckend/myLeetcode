//
//  main.cpp
//  342. Power of Four
//
//  Created by ckend on 2017/5/4.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool isPowerOfFour(int num){
        return (0x55555555 & num) != 0 && ((num-1)&num) == 0;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
