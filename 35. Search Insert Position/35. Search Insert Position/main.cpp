//
//  main.cpp
//  35. Search Insert Position
//
//  Created by ckend on 2017/1/31.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    int searchInsert(std::vector<int>& nums, int target){
        int low = 0;
        int high = (int)nums.size() - 1;
        while(low <= high){
            int mid = (low+high)/2;
            if(target == nums[mid])
                return mid;
            else if(nums[mid] < target)
                low = mid + 1;
            else if(nums[mid] > target)
                high = mid - 1;
        }
        return low;
    }
};
int main(int argc, const char * argv[]) {
    std::vector<int>nums;
    nums.push_back(1);
    Solution y;
    std::cout << y.searchInsert(nums, 2)<<std::endl;
    return 0;
}
