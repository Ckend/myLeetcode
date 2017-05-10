//
//  main.cpp
//  400. Nth Digit
//
//  Created by ckend on 2017/5/9.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int findNthDigit(long n){
        
        //求出这个位置的数字的位数
        long howLong = 9, digits = 1;
        while (n - howLong*digits > 0) {
            n -= howLong*digits;
            howLong = howLong * 10;
            ++digits;
        }
        
        //求出是什么数字
        long index = n % digits;
        if (index == 0)
            index = digits;
        long num = 1;
        for (int i = 1; i < digits; ++i) {
            num = num * 10;
        }
        //若为0则是上个数字的最后一位
        num += (index == digits) ? n / digits - 1 : n / digits;
        
        //求出结果
        for (long i = index; i < digits; ++i) {
            num = num / 10;
        }
        return (int)num % 10;
        
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
