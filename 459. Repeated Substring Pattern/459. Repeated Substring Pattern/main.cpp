//
//  main.cpp
//  459. Repeated Substring Pattern
//
//  Created by ckend on 2017/9/23.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    std::string test(std::string temp,int l){
        std::string result = temp.substr(l);
        result +=  temp.substr(0,l);
        return result;
    }
    bool repeatedSubstringPattern(std::string s) {
        int size = s.size();
        for (int i = 1; i <= size/2; ++i) {
            if (size % i == 0) {
                std::string answer = test(s, i);
                if (answer == s) {
                    return true;
                }
            }
        }
        return false;
    }
};
int main(int argc, const char * argv[]) {
    std::string x = "babbbbaabbababbaaaaababbaaabbbbaaabbbababbbbabaabababaabaaabbbabababbbabababaababaaaaabbabaaaabaaaab";
    Solution y;
    std::cout<<y.repeatedSubstringPattern(x)<<std::endl;
    return 0;
}
