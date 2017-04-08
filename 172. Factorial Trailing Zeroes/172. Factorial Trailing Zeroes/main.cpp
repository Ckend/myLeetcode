//
//  main.cpp
//  172. Factorial Trailing Zeroes
//
//  Created by ckend on 2017/4/8.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int trailingZeroes(int n){
        //0只能从2*5中得到(质因子)
        //由于2可以从2,4,16等中得到，因此很容易知道2的个数远多于5
        //因此只需要算5的个数即可
        return n == 0 ? 0 : (n/5 + trailingZeroes(n/5));
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
