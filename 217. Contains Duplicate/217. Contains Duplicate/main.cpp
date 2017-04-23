//
//  main.cpp
//  217. Contains Duplicate
//
//  Created by ckend on 2017/4/20.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
class Solution{
public:
    bool containsDuplicate(std::vector<int> &nums){
        return std::set<int>(nums.begin(),nums.end()).size() < nums.size();
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
