//
//  main.cpp
//  8.atoi
//
//  Created by ckend on 2017/1/24.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>

class solution{
public:
    int myAtoi(std::string str){
        int base = 0;
        int i = 0;
        int signal = 1;
        while(str[i] == ' ')
            ++i;
        if(str[i] == '-' || str[i] == '+'){
            if(str[i] == '-')
                signal = -1;
            ++i;
        }
        while(str[i]>='0' && str[i]<='9'){
            if(base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)){
                if(signal == -1)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
            base = 10 * base + (str[i++] - '0');
        }
        return base * signal;
    }
};
int main(int argc, const char * argv[]) {
    std::string a = "+-2";
    solution y;
    int b = y.myAtoi(a);
    std::cout<<b<<std::endl;
    return 0;
}
