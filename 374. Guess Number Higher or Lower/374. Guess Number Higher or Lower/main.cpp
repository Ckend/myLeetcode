//
//  main.cpp
//  374. Guess Number Higher or Lower
//
//  Created by ckend on 2017/5/7.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int guessNumber(int n){
        int low = 1;
        int high = n;
//        while (low <= high) {
//            long mid = (high + low) >> 1;
//            if (guess(mid) == 0) return mid;
//            else if(guess(mid) == -1) high = mid - 1;
//            else if(guess(mid) == 1) low = mid + 1;
//        }
//        return -1;
        while (low <= high) {
            int mid1 = low + (high - low)/3;
            int mid2 = high - (high - low)/3;
            if(guees(mid1) == 0) return mid1;
            else if(guess(mid2) == 0) return mid2;
            else if(guess(mid1) < 0) high = mid1 - 1;
            else if(guess(mid2) > 0) low = mid1 + 1;
            else{
                low = mid1 + 1;
                high = mid2 - 1;
            }
        }
        return -1;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
