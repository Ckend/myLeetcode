//
//  main.cpp
//  121. Best Time to Buy and Sell Stock
//
//  Created by ckend on 2017/3/28.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    int maxProfit(std::vector<int> &prices){
        int result = 0;
        int temp = 0;
        for (int i = 1; i < (int)prices.size(); ++i) {
            temp += prices[i] - prices[i-1];
            temp = std::max(temp,0);
            result = std::max(result,temp);
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
