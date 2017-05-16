//
//  main.cpp
//  405. Convert a Number to Hexadecimal
//
//  Created by ckend on 2017/5/16.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    const std::string map = "0123456789abcdef";
    std::string toHex(int num){
        if (num == 0) {
            return "0";
        }
        std::string result = "";
        int count = 0;
        //Count是为了防止负数一直算下去，限定八位
        while (num && count++ < 8) {
            result = map[(num & 15)] + result;
            num = num >> 4;
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
