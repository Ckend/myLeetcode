//
//  main.cpp
//  191. Number of 1 Bits
//
//  Created by ckend on 2017/4/11.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int hammingWeight(uint32_t n){
        int result = 0;
        for (int i = 0; i<32; ++i) {
            result  = result + (n>>i & 1) == 1 ? 1:0;
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
