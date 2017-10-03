//
//  main.cpp
//  476. Number Complement
//
//  Created by ckend on 2017/10/3.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>

class Solution{
public:
    int findComplement(int num){
        unsigned temp = ~0;
        //全1
        while (num & temp) {
            //当还有同样的位的时候
            temp = temp << 1;
            //做左移动
        }
        return ~temp & ~num;
        //如:   0000 1101
        //      1111 1111
        //      1111 0000
        // ~temp : 0000 1111
        // ~num :  1111 0010
        // = 0000 0010
    }
};
