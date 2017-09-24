//
//  main.cpp
//  461. Hamming Distance
//
//  Created by ckend on 2017/9/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution{
public:
    int hammingDistance(int x,int y){
        int result = x ^ y;
        int ret = 0;
        while (result) {
            ret++;
            result = result & result - 1;
            // 可以去掉x和y中一样的bit(每次都只减1，总是影响有1的那个位，从而算出1的个数)
            // (6+7 0110 0111 如0001 0000 = 0 ret = 1)。
            // (3+5 0011 0101 如0110 0101 = 0100 0011 = 0000 ret = 2)
        }
        return ret;
    }
};
