//
//  main.cpp
//  367. Valid Perfect Square
//
//  Created by ckend on 2017/5/6.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool isPerfectSquare(int num){
        int low = 1;
        int high = num;
        while (low <= high) {
            long mid = (low + high) >> 1;
            if (mid * mid == num) return true;
            else if(mid * mid < num) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
