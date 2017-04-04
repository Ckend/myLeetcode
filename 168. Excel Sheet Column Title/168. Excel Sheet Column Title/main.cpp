//
//  main.cpp
//  168. Excel Sheet Column Title
//
//  Created by ckend on 2017/4/4.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    std::string convertToTitle(int n){
        return n == 0  ? "" : convertToTitle(n/26)+(char)(--n%26 + 'A');
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
