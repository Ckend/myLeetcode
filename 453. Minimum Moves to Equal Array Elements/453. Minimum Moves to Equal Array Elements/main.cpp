//
//  main.cpp
//  453. Minimum Moves to Equal Array Elements
//
//  Created by ckend on 2017/9/12.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution {
public:
    int minMoves(std::vector<int> &nums){
        int sum = 0;
        int n = nums.size();
        // sum + m(n-1) = x n
        // x = min + m
        //带入得 m = sum - min n
        auto min = std::min_element(std::begin(nums), std::end(nums));
        for(std::vector<int>::iterator it = nums.begin(); it != nums.end();++it){
            sum += *it;
        }
        return sum - (*min * n);
    }
};
