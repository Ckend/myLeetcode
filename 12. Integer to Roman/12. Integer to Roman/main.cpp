//
//  main.cpp
//  12. Integer to Roman
//
//  Created by ckend on 2017/1/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    std::string intToRoman(int num){
        std::string M[] = {"", "M", "MM", "MMM"};
        std::string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        std::string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        std::string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        return M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + I[num%10];
    }
};
int main(int argc, const char * argv[]) {
    int nums = 1234;
    Solution y;
    std::cout<<y.intToRoman(nums)<<std::endl;
    return 0;
}
