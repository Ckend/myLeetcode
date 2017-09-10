//
//  main.cpp
//  448. Find All Numbers Disappeared in an Array
//
//  Created by ckend on 2017/9/11.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution{
public:
    std::vector<int> findDisappearedNumbers(std::vector<int> &nums){
        std::vector<int> result;
        int array[100000] = {0};
        for (int i = 0; i < nums.size(); ++i) {
            array[nums[i]] += 1;
        }
        for (int i = 1; i < nums.size(); ++i) {
            if (array[i] == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};
