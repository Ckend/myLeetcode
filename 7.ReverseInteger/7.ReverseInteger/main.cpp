//
//  main.cpp
//  7.ReverseInteger
//
//  Created by ckend on 2017/1/21.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class solution{
public:
    int reverse(int x){
        long rev = 0;
        while(x != 0){
            rev = rev * 10 + x % 10;
            x = x / 10;
        }
        //因为判断条件在后面，若rev为int型，存放不了比int型大的数据
        //因此rev为long型，以免出错
        if(rev > 2147483647 || rev < -2147483648)
            return 0;
        else
            return (int)rev;
    }
};
int main(int argc, const char * argv[]) {
    int number = 2234567891;
    solution y;
    std::cout << y.reverse(number) << std::endl;
    return 0;
}
