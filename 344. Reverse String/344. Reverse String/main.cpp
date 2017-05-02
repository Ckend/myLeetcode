//
//  main.cpp
//  344. Reverse String
//
//  Created by ckend on 2017/5/1.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    std::string reverseString(std::string s){
        int i = s.length()-1,j = 0;
        while (j < i) {
            std::swap(s[i--], s[j++]);
        }
        return s;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
