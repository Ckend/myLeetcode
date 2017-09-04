//
//  main.cpp
//  268. Missing Number
//
//  Created by ckend on 2017/9/4.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
int main(int argc, const char * argv[]) {
    return 0;
}
class Solution{
public:
    int missingNumber(std::vector<int> &nums){
        int judge = 0,i = 0;
        for (i = 0; i < nums.size(); ++i) {
            judge = judge ^ i ^ nums[i];
        }
        return judge^i;
    }
};
