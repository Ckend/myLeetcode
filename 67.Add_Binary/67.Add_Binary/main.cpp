//
//  main.cpp
//  67.Add_Binary
//
//  Created by ckend on 2017/3/11.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    std::string addBinary(std::string a, std::string b){
        std::string result = "";
        int i = (int)a.size()-1;
        int j = (int)b.size()-1;
        int c = 0;
        while (i>=0 || j>=0 || c == 1) {
            c += (i>=0 ? a[i--] - '0': 0);
            c += (j>=0 ? b[j--] - '0': 0);
            result = char(c % 2 + '0') + result;
            //添加原来这个位置上运算后的数
            c /= 2;
            //c用来存储进位
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    std::string a = "101";
    std::string b = "111";
    Solution y;
    std::cout << y.addBinary(a, b) << std::endl;
    return 0;
}
