//
//  main.cpp
//  69.Sqrt(x)
//
//  Created by ckend on 2017/3/12.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    long sqrt(int x){
        long answer = x;
        while (answer * answer > x) {
            answer = (answer + x/answer)/2;
        }
        return answer;
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    std::cout<<y.sqrt(25)<<std::endl;
    return 0;
}
