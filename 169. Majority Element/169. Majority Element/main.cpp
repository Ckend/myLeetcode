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
//   哈希表法:
//        std::map<int, int>counter;
//        for (int i = 0; i < nums.size(); ++i)
//            if(++counter[nums[i]] > nums.size()/2)
//                return nums[i];
//   排序法:
//        nth_element(nums.begin(),nums.begin()+nums.size()/2,nums.end());
//        return nums[nums.size()/2];
//   随机数法：
//        srand((unsigned)time(NULL));
//        while (1) {
//            int counters = 0;
//            int index = rand() % nums.size();
//            for (int i = 0; i < nums.size(); ++i) {
//                if (nums[index] == nums[i]){
//                    ++counters;
//                }
//                if (counters > nums.size()/2){
//                    return nums[index];
//                }
//            }
//        }
//   摩尔投票法:
//        int major = 0, counters = 0;
//        for (int i = 0; i < nums.size(); ++i) {
//            if(!counters){
//                major = nums[i];
//                counters = 1;
//            }
//            else
//                counters += (major == nums[i]) ? 1:-1;
//        }
//        return major;//因为一定存在，所以可以直接返回
//   分治法：
//        return majority(nums, 0, nums.size()-1);
//   位操作:
        int major = 0;
        for (int i = 0,mask = 1; i < 32; ++i,mask <<= 1) {
            int bitCounts = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if(nums[j] & mask) bitCounts++;
                if (bitCounts > nums.size()/2) {
                    major |= mask;
                    break;
                }
            }
        }
        return major;
//private:
//    int majority(std::vector<int> &nums,int left,int right){
//        if (left == right) {
//            return nums[left];
//        }
//        int mid = left + ((right - left) >> 1);
//        int lm = majority(nums, left, mid);
//        int rm = majority(nums, mid + 1, right);
//        if(lm == rm){
//            return rm;
//        }
//        return std::count(nums.begin() + left, nums.begin() + right + 1, lm) > std::count(nums.begin() + left, nums.begin() + right + 1, rm) ? lm : rm;
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
