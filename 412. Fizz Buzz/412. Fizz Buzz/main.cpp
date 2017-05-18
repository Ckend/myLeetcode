//
//  main.cpp
//  412. Fizz Buzz
//
//  Created by ckend on 2017/5/19.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    std::vector<std::string> fizzBuzz(int n){
        int i = 1;
        std::vector<std::string>result;
        while (i <= n) {
            if (i % 3 == 0 && i % 5 != 0) {
                result.push_back("Fizz");
            }
            else if(i % 5 == 0 && i % 3 != 0){
                result.push_back("Buzz");
            }
            else if(i % 5 == 0 && i % 3 == 0){
                result.push_back("FizzBuzz");
            }
            else{
                result.push_back(std::to_string(i));
            }
            ++i;
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
