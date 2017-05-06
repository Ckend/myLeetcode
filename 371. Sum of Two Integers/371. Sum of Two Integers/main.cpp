//
//  main.cpp
//  371. Sum of Two Integers
//
//  Created by ckend on 2017/5/6.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int getSum(int a, int b){
        int sum = a;
        while(b != 0){
            sum = a ^ b; //不考虑进位,单纯相加
            b = (a & b) << 1; //进行进位
            a = sum;
        }
        return sum;
        //0101
        //0110
        //0011
        //1000
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
