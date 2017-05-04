//
//  main.cpp
//  349. Intersection of Two Arrays
//
//  Created by ckend on 2017/5/5.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>

class Solution{
public:
    std::vector<int>intersection(std::vector<int> &nums1,std::vector<int> &nums2){
        std::set<int> temp(nums1.begin(),nums1.end());
        std::vector<int>result;
//        for (auto value : nums2) {
//            if (temp.count(value)) {
//                result.push_back(value);
//                temp.erase(value);
//            }
//        }
        for (int i = 0; i < nums2.size(); ++i) {
            if (temp.count(nums2[i])) {
                result.push_back(nums2[i]);
                temp.erase(nums2[i]);
            }
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
