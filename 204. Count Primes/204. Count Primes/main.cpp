//
//  main.cpp
//  204. Count Primes
//
//  Created by ckend on 2017/4/18.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

class Solution{
    int countPrimes(int n){
        std::vector<bool>x(n,true);
        x[0] = false;
        x[1] = false;
        for (int i = 0; i<sqrt(n); i++) {
            if(x[i]){
                for (int j = i*i; j < n; j += i) {
                    x[i] = false;
                }
            }
        }
        return std::count(x.begin(), x.end(), true);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
