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
            // 可以去掉一样的，而且一次去掉一个。
            // 因为一个数一定是比他小的两个相加而得。
        }
        return ret;
    }
};
