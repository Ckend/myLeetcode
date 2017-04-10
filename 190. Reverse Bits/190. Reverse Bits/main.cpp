//
//  main.cpp
//  190. Reverse Bits
//
//  Created by ckend on 2017/4/8.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    uint32_t reverseBits(uint32_t n){
        uint32_t result = 0;
        for (int i = 0; i < 32; ++i) {
            result = (result<<1) + ((n>>i)&1);
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    uint32_t x = 3;
    Solution z;
    uint32_t y = z.reverseBits(x);
    std::cout<<x<<std::endl<<y<<std::endl;
    return 0;
}
