//
//  main.cpp
//  LEETCODE
//
//  Created by ckend on 2017/1/19.
//  Copyright © 2017年 ckend. All rights reserved.
//  Learn from leetcode
//

#include <iostream>
#include <vector>
#include <map>
#include <iterator>

class soluction{
public:
    std::vector<int>twosum(std::vector<int>& nums,int target){
        std::vector<int>result;
        std::map<int, int>mymap;
        for(int i = 0; i < nums.size(); ++i){
            int forfind = target - nums[i];
            if(mymap.find(forfind) != mymap.end()){
                result.push_back(mymap[forfind]);
                result.push_back(i);
                return result;
            }
            mymap[nums[i]] = i;
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    std::vector<int>numbers;
    std::vector<int>result;
    int x;
    x = 70;
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    numbers.push_back(60);
    soluction y;
    result = y.twosum(numbers, x);
    for(std::vector<int>::iterator iter = result.begin();iter!=result.end();++iter){
        std::cout<<*iter<<std::endl;
    }
    return 0;
}
