//
//  main.cpp
//  53. Maximum Subarray
//
//  Created by ckend on 2017/2/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    int maxSubArray(std::vector<int>& nums){
        int answer = nums[0],temp = 0;
        for (int i = 0; i < nums.size(); ++i) {
            temp += nums[i];
            answer = std::max(temp, answer);
            temp = std::max(temp, 0);
        }
        return answer;
        
    }
};
int main(int argc, const char * argv[]) {
    std::vector<int>a;
    a.push_back(1);
    a.push_back(-3);
    a.push_back(2);
    a.push_back(-5);
    a.push_back(-4);
    Solution y;
    std::cout<<y.maxSubArray(a)<<std::endl;
    return 0;
}
