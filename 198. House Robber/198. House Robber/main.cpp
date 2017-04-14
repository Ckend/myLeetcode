//
//  main.cpp
//  198. House Robber
//
//  Created by ckend on 2017/4/12.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>

class Solution{
public:
    int rob(std::vector<int> &nums){
//        int temp1 = 0;
//        int temp2 = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            if(i % 2 == 0){
//                temp1 = std::max(temp1 + nums[i],temp2);
//            }
//            else{
//                temp2 = std::max(temp1, temp2+nums[i]);
//            }
//        }
//        return std::max(temp1, temp2);
//        =====================
//        int n = nums.size();
//        if(n == 1)
//            return nums[0];
//        if(n == 2)
//            return std::max(nums[0], nums[1]);
//        std::vector<int> temp1 = std::vector<int>(nums.begin()+1,nums.end());
//        std::vector<int> temp2 = std::vector<int>(nums.begin()+2,nums.end());
//        return std::max(rob(temp1),rob(temp2)+nums[0]);
//        ======================
        if(nums.size() <= 1){
            return nums.size() == 0 ? 0 : nums[0];
        }
        int a = nums[0];
        //a是上次的最大收益;
        int b = std::max(nums[0], nums[1]);
        //b是当前的最大收益
        
        for (int i = 2; i < nums.size(); ++i) {
            int temp = b;
            b = std::max(nums[i]+a,b);
            a = temp;
        }
        return b;
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
