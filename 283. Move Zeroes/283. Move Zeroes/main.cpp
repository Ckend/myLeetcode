//
//  main.cpp
//  283. Move Zeroes
//
//  Created by ckend on 2017/9/7.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution{
public:
    void moveZeroes(std::vector<int> &nums){
        int signal = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[signal] = nums[i];
                ++signal;
            }
        }
        while (signal < nums.size()) {
            nums[signal++] = 0;
        }
    }
};
