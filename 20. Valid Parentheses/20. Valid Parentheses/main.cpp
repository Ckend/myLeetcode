//
//  main.cpp
//  20. Valid Parentheses
//
//  Created by ckend on 2017/1/27.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <stack>
class Solution{
public:
    bool isValid(std::string s) {
        std::stack<char>sign;
        for(int i = 0; i < s.size();++i){
            switch (s[i]) {
                case '{': case '[': case '(':
                    sign.push(s[i]);
                    break;
                    
                case '}':
                    if(sign.empty() || sign.top()!='{'){
                        return false;
                    }
                    else{
                        sign.pop();
                        break;
                    }
                case ']':
                    if(sign.empty() || sign.top()!='['){
                        return false;
                    }
                    else{
                        sign.pop();
                        break;
                    }
                case ')':
                    if(sign.empty() || sign.top()!='('){
                        return false;
                    }
                    else{
                        sign.pop();
                        break;
                    }
                default:
                    ;
            }
        }
        return sign.empty();
    }
};
int main(int argc, const char * argv[]) {
    std::string input = "[123]";
    Solution y;
    std::cout << y.isValid(input) << std::endl;
    return 0;
}
