//
//  main.cpp
//  441. Arranging Coins
//
//  Created by ckend on 2017/6/3.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <math.h>
class Solution{
public:
    int arrangeCoins(int n){
        return (int)((-1 + sqrt(1 + 8 * (long)n)) / 2);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
