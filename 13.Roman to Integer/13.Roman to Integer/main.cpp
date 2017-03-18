//
//  main.cpp
//  13.Roman to Integer
//
//  Created by ckend on 2017/1/25.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int romanToInt(std::string s) {
        int numbers = 0;
        if(s.find("IV")!=-1){numbers-=2;}
        if(s.find("IX")!=-1){numbers-=2;}
        if(s.find("XL")!=-1){numbers-=20;}
        if(s.find("XC")!=-1){numbers-=20;}
        if(s.find("CD")!=-1){numbers-=200;}
        if(s.find("CM")!=-1){numbers-=200;}
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == 'M')
                numbers = numbers + 1000;
            else if(s[i] == 'D')
                numbers = numbers + 500;
            else if(s[i] == 'C')
                numbers = numbers + 100;
            else if(s[i] == 'L')
                numbers = numbers + 50;
            else if(s[i] == 'X')
                numbers = numbers + 10;
            else if(s[i] == 'V')
                numbers = numbers + 5;
            else if(s[i] == 'I')
                numbers = numbers + 1;
            else
                ;
        }
        return numbers;
    }
};
int main(int argc, const char * argv[]) {
    std::string a = "IV";
    Solution y;
    std::cout << y.romanToInt(a)<<std::endl;
    return 0;
}
