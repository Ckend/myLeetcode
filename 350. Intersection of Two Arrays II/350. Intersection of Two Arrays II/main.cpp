//
//  main.cpp
//  350. Intersection of Two Arrays II
//
//  Created by ckend on 2017/5/5.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>

class Solution{
public:
    std::vector<int> intersect(std::vector<int> &nums1, std::vector<int> &nums2){
        std::vector<int> result;
        std::map<int, int> dict;
        for (int i = 0; i < nums1.size(); ++i) {
            ++dict[nums1[i]];
        }
        for (int i = 0; i < nums2.size(); ++i) {
            if (--dict[nums2[i]] >= 0){
                result.push_back(nums2[i]);
            }
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    std::vector<int> nums1,nums2,result;
    result = y.intersect(nums1, nums2);
    nums2.push_back(1);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] <<std::endl;
    }
    return 0;
}
