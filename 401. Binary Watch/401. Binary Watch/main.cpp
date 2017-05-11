//
//  main.cpp
//  401. Binary Watch
//
//  Created by ckend on 2017/5/11.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <bitset>
class Solution{
public:
    std::vector<std::string> readBinaryWatch(int num){
        std::vector<std::string>answer;
        for(int i = 0; i < 12; ++i){
            for (int j = 0; j < 60; ++j) {
                if (std::bitset<10>(i << 6 | j).count() == num) {
                    answer.push_back(std::to_string(i) + ((j > 9) ? ":" : ":0") + std::to_string(j));
                }
            }
        }
        return answer;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
