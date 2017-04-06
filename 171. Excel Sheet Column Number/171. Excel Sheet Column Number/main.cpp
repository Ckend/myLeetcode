//
//  main.cpp
//  171. Excel Sheet Column Number
//
//  Created by ckend on 2017/4/6.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int titleToNumber(std::string s){
        int result = 0;
        for (int i = 0; i<s.length(); ++i) {
            result = 26*result + (s[i] - 'A' + 1);
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
