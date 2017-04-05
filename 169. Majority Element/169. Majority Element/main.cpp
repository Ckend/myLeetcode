//
//  main.cpp
//  169. Majority Element
//
//  Created by ckend on 2017/4/5.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

class Solution{
public:
    int majorityElement(std::vector<int> &nums){
        std::map<int, int>counter;
        for (int i = 0; i < nums.size(); ++i)
            if(++counter[nums[i]] > nums.size()/2)
                return nums[i];
        return 0;
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    std::vector<int>x;
    x.push_back(3);
    x.push_back(2);
    x.push_back(3);
    std::cout << y.majorityElement(x)<<std::endl;
    return 0;
}
