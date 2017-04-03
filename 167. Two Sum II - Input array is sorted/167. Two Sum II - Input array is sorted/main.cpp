//
//  main.cpp
//  167. Two Sum II - Input array is sorted
//
//  Created by ckend on 2017/4/4.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solutoion{
public:
    std::vector<int> twoSum(std::vector<int> &nums,int target){
        int i = 0;
        int j = nums.size()-1;
        std::vector<int>answer;
        while (nums[i] + nums[j] != target) {
            if (nums[i]+nums[j] < target) {
                ++i;
            }
            else
                --j;
        }
        answer.push_back(i+1);
        answer.push_back(j+1);
        return answer;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
