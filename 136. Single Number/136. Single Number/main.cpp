//
//  main.cpp
//  136. Single Number
//
//  Created by ckend on 2017/3/30.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    int singleNumber(std::vector<int> &nums){
        int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            result = result ^ nums[i];
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    return 0;
}
