//
//  main.cpp
//  414. Third Maximum Number
//
//  Created by ckend on 2017/5/19.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>

class Solution{
public:
    int thirdMax(std::vector<int> &nums){
        std::set<int> temp;
        for (int i = 0; i < nums.size(); ++i) {
            temp.insert(nums[i]);
            if (temp.size() > 3) {
                temp.erase(temp.begin());
            }
        }
        if (temp.size()>2) {
            return *temp.begin();
        }else{
            return *temp.rbegin();
        }
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
