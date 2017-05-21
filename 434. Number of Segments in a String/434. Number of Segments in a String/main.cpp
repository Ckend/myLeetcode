//
//  main.cpp
//  434. Number of Segments in a String
//
//  Created by ckend on 2017/5/21.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int countSegments(std::string s){
        int answer = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]!=' ' && (i == 0 || s[i-1] == ' ')) {
                ++answer;
            }
        }
        return answer;
    }
};
int main(int argc, const char * argv[]) {
    std::string x = "Hello, my name is John";
    Solution y;
    std::cout << y.countSegments(x) << std::endl;
    return 0;
}
