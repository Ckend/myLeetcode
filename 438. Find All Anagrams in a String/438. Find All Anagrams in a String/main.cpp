//
//  main.cpp
//  438. Find All Anagrams in a String
//
//  Created by ckend on 2017/5/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    std::vector<int> findAnagrams(std::string s,std::string p){
        std::vector<int>s1(256,0);
        std::vector<int>s2(256,0);
        std::vector<int>res;
        if (s.size()<p.size()) {
            return res;
        }
        for (int i = 0; i < p.size(); ++i) {
            ++s1[s[i]];
            ++s2[p[i]];
        }
        if (s1 == s2) {
            res.push_back(0);
        }
        for (int i = p.size(); i < s.size() ; ++i) {
            ++s1[s[i]];
            --s1[s[i-p.size()]];
            if (s1 == s2) {
                res.push_back(i-p.size()+1);
            }
        }
        return res;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
