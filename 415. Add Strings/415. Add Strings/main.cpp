//
//  main.cpp
//  415. Add Strings
//
//  Created by ckend on 2017/5/20.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    std::string addStrings(std::string num1,std::string num2){
        int s1 = num1.size() - 1;
        int s2 = num2.size() - 1;
        int carry = 0;
        std::string result = "";
        while (s1 >= 0 || s2 >= 0 || carry) {
            long sum = 0;
            if (s1>=0) {
                sum += num1[s1] - '0';
                s1--;
            }
            if (s2>=0) {
                sum += num2[s2] - '0';
                s2--;
            }
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;
            result = std::to_string(sum) + result;
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
