//
//  main.cpp
//  485. Max Consecutive Ones
//
//  Created by ckend on 2017/10/6.
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
    int findMaxConsecutiveOnes(std::vector<int>& nums){
        int max = 0;
        int temp = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                max = std::max(temp, max);
                temp = 0;
                continue;
            }
            ++temp;
            max = std::max(temp,max);
        }
        return max;
    }
};
