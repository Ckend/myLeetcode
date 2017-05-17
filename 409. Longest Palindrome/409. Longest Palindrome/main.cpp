//
//  main.cpp
//  409. Longest Palindrome
//
//  Created by ckend on 2017/5/18.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int longestPalindrome(std::string s){
        if (s.length() == 0) {
            return 1;
        }
        int temp[200] = {0};
        int result = 0;
        int odd = 0;
        for (int i = 0; i < s.length(); ++i) {
            temp[s[i]]++;
        }
        for (int i = 0; i < 200; ++i) {
            while (temp[i] >= 2) {
                result++;
                temp[i] = temp[i] - 2;
            }
        }
        for (int i = 0; i < 200; ++i) {
            if (temp[i] != 0) {
                odd = 1;
            }
        }
        return result*2 + odd;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
