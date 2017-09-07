//
//  main.cpp
//  290. Word Pattern
//
//  Created by ckend on 2017/9/8.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <map>
int main(int argc, const char * argv[]) {

    return 0;
}
class Solution {
public:
    bool wordPattern(std::string pattern, std::string str) {
        std::istringstream in(str);
        std::map<char, int>p;
        std::map<std::string,int>w;
        //处理每一个单词
        int i = 0,n=pattern.size();
        for (std::string word; in >> word; ++i) {
            if (p[pattern[i]] != w[word]) {
                return false;
            }
            p[pattern[i]] = w[word] = i+1;
        }
        return i == n;
    }
};
