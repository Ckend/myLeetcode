//
//  main.cpp
//  189. Rotate Array
//
//  Created by ckend on 2017/4/8.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>

class Solution{
public:
    void rotate(std::vector<int> &nums,int k){
        std::vector<int> temp(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            temp[(i+k)%nums.size()] = nums[i];
        }
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] = temp[i];
        }
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
