//
//  main.cpp
//  219. Contains Duplicate II
//
//  Created by ckend on 2017/4/22.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
class Solution{
public:
    bool containsNearbyDuplicate(std::vector<int> &nums,int k){
        std::set<int>temp;
        if (k<=0) {
            return false;
        }
        if(k > nums.size()){
            k = nums.size()-1;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if(i>k) temp.erase(nums[i-k-i]);
            if(temp.find(nums[i])!=temp.end()){
                return true;
            }
            temp.insert(nums[i]);
        }
        return false;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
