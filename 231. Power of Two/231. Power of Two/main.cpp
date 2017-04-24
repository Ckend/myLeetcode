//
//  main.cpp
//  231. Power of Two
//
//  Created by ckend on 2017/4/24.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool isPowerOfTwo(int n){
        if(n <= 0) return false;
        return !(n&n-1);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
