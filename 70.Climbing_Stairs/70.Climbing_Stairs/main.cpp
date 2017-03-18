//
//  main.cpp
//  70.Climbing_Stairs
//
//  Created by ckend on 2017/3/15.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    int climbStairs(int n){
        std::vector<int>result(n+1);
        result[0] = 1;
        result[1] = 1;
        for (int i = 2; i <= n; ++i) {
            result[i] = result[i-1] + result[i-2];
        }
        return result[n];
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    std::cout << y.climbStairs(10) << std::endl;
    return 0;
}
