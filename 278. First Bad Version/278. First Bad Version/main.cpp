//
//  main.cpp
//  278. First Bad Version
//
//  Created by ckend on 2017/9/5.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
bool isBadVersion(int version);
class Solution{
public:
    int firstBadVersion(int n){
        int m = 0;
        while (m < n) {
            int mid = m + (n-m)/2;
            if (!isBadVersion(mid)) {
                m = mid + 1;
            }else{
                n = mid;
            }
        }
        return m;
    }
};
