//
//  main.cpp
//  38. Count and Say
//
//  Created by ckend on 2017/1/31.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <string>

class Solution{
public:
    std::string countAndSay(int n){
        if(n == 0) return "";
        std::string result = "1";
        while (--n) {
            std::string temp = "";
            for(int i = 0;i < result.size(); ++i){
                int count = 1;
                while((i+1 < result.size()) && result[i] == result[i+1]) {
                    ++count;
                    ++i;
                }
                temp +=std::to_string(count) + result[i];
            }
            result = temp;
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    int x = 6;
    Solution y;
    std::cout << y.countAndSay(x) << std::endl;
    return 0;
}
