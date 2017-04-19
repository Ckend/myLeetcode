//
//  main.cpp
//  205. Isomorphic Strings
//
//  Created by ckend on 2017/4/18.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <map>
class Solution{
public:
    bool isIsomorphic(std::string s, std::string t){
        int m1[256] = {0};
        int m2[256] = {0};
        if (s.length() != t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); ++i) {
            if(m1[s[i]] != m2[t[i]])
                return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    std::string x1 = "egg";
    std::string x2 = "add";
    std::cout<<y.isIsomorphic(x1, x2)<<std::endl;
    return 0;
}
