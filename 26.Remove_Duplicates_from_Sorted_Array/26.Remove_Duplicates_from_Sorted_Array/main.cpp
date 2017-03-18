//
//  main.cpp
//  26.Remove_Duplicates_from_Sorted_Array
//
//  Created by ckend on 2017/1/29.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    int removeDuplicates(std::vector<int>& nums){
        int id = 1;
        if(nums.size() < 2)
            return (int)nums.size();
        for(int i = 1;i < nums.size(); ++i){
            if(nums[i] != nums[i-1])
                nums[id++] = nums[i];
        }
        return id;
    }
};
int main(int argc, const char * argv[]) {
    std::vector<int>input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    Solution y;
    std::cout << y.removeDuplicates(input)<<std::endl;
    return 0;
}
