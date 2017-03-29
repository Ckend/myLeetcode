//
//  main.cpp
//  122. Best Time to Buy and Sell Stock II
//
//  Created by ckend on 2017/3/29.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>

class Solution{
public:
    int maxProfit(std::vector<int> &prices){
        int result = 0;
        for (int i = 1; i < prices.size(); ++i) {
            result += std::max(prices[i] - prices[i-1],0);
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
