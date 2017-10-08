//
//  main.cpp
//  479. Largest Palindrome Product
//
//  Created by ckend on 2017/10/8.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <math.h>
class Solution{
public:
    int largestPalindrome(int n){
        if(n == 1) return 9;
        int max = pow(10,n)-1;
        int min = pow(10,n-1);
        for (int i = max; i >= min; --i) {
            long temp = build(i);
            for (long j = max; j*j >= temp; --j) {
                if (temp % j == 0 && temp/j <= max) {
                    //temp/j是另一因子。
                    return temp % 1337;
                }
            }
        }
        return -1;
    }
    long build(int n){
        std::string s = std::to_string(n);
        std::reverse(s.begin(),s.end());
        return std::stol(std::to_string(n)+s);
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    for (int i = 2; i <= 8; ++i) {
        std::cout << y.largestPalindrome(i) << std::endl;
    }
    return 0;
}
