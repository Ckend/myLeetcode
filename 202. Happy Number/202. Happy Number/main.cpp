//
//  main.cpp
//  202. Happy Number
//
//  Created by ckend on 2017/4/15.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int count(int n){
        int res = 0;
        while (n) {
            int x = n % 10;
            res += x*x;
            n /= 10;
        }
        return res;
    }
    bool isHappy(int y){
        int slow,fast;
        slow = fast = y;
        do{
            slow = count(slow);
            fast = count(fast);
            fast = count(fast);
        }while(fast != slow);
        if(slow == 1)
            return true;
        else
            return false;
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    std::cout << y.count(19) << "\n";
    return 0;
}
