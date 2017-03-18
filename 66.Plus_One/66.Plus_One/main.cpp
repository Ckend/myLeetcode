//
//  main.cpp
//  66.Plus_One
//
//  Created by ckend on 2017/2/27.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int length = (int)digits.size();
        for (int i = length - 1; i >= 0; --i){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
int main(int argc, const char * argv[]) {
    std::vector<int>x;
    x.push_back(9);
    x.push_back(9);
    Solution y;
    for (int i = 0; i < y.plusOne(x).size(); ++i) {
        std::cout << y.plusOne(x)[i] << std::endl;
    }
    return 0;
}
