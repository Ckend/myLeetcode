//
//  main.cpp
//  263. Ugly Number
//
//  Created by ckend on 2017/4/30.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool isUgly(int num){
        for (int i = 2; i <= 5 && num != 0; ++i) {
            while(num % i == 0)
                num /= i;
        }
        return num == 1;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
