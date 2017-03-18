//
//  main.cpp
//  28. Implement strStr()
//
//  Created by ckend on 2017/1/30.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int strStr(std::string haystack, std::string needle){
        for(int i = 0; ; ++i)
            for(int j = 0; ;++j){
                if(j == needle.length()) return i;
                if(i + j == haystack.length()) return -1;
                if(needle[j] != haystack[i+j]) break;
            }
    }
};
int main(int argc, const char * argv[]) {
    std::string input = "Hello, World!";
    std::string needle = "Worldo";
    Solution y;
    std::cout << y.strStr(input, needle) << std::endl;
    return 0;
}
