//
//  main.cpp
//  14. Longest Common Prefix
//
//  Created by ckend on 2017/1/27.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string prefix = "";
        for(int j = 0; strs.size() > 0; prefix += strs[0][j] ,++j){
            for(int i = 0; i<strs.size();++i){
                if(j >= strs[i].size() || (i>0 && strs[i][j] != strs[i-1][j]))
                    return prefix;
            }
        }
        return prefix;
    }
};
int main(int argc, const char * argv[]) {
    std::vector<std::string>input;
    input.push_back("aa");
    input.push_back("aa");
    Solution y;
    std::cout << y.longestCommonPrefix(input)<<std::endl;
    return 0;
}
