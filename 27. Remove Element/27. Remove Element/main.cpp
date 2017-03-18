//
//  main.cpp
//  27. Remove Element
//
//  Created by ckend on 2017/1/30.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    int removeElement(std::vector<int>& nums, int val){
        int id = 0;
        for(int i = 0; i < nums.size(); ++i)
            if(nums[i] != val)
                nums[id++] = nums[i];
        return id;
    }
};
int main(int argc, const char * argv[]) {
    std::vector<int>input;
    input.push_back(3);
    input.push_back(2);
    input.push_back(2);
    input.push_back(3);
    Solution y;
    std::cout << y.removeElement(input, 3) << std::endl;
    return 0;
}
