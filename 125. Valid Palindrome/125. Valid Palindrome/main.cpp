//
//  main.cpp
//  125. Valid Palindrome
//
//  Created by ckend on 2017/3/30.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool isPalindrome(std::string s){
        for (int i = 0,j = (int)s.size()-1; i < j; ++i,--j) {
            while (!isalnum(s[i]) && i < j) {
                ++i;
            }
            while (!isalnum(s[j])&& i < j) {
                --j;
            }
            if (std::toupper(s[i]) != std::toupper(s[j])) {
                return false;
            }
        }
        return true;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
