//
//  main.cpp
//  496. Next Greater Element I
//
//  Created by ckend on 2017/10/11.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>
#include <map>

//[1,3,5,2,4]
//[6,5,4,3,2,1,7]
class Solution{
public:
    std::vector<int> nextGreaterElement(std::vector<int>& findNums, std::vector<int>& nums){
        
        std::vector<int> result;
        std::stack<int> target;
        std::map<int,int> temp;
        
        for(int num : nums){
            while (target.size() && num > target.top()) {
                // 注意这里的判断顺序不能反。
                temp[target.top()] = num;
                target.pop();
            }
            target.push(num);
        }
        for(int x : findNums){
            result.push_back(temp.count(x) ? temp[x]:-1);
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    std::vector<int> x = {1,3,5,2,4};
    std::vector<int> y = {6,5,4,3,2,1,7};
    std::vector<int> answer;
    Solution z;
    answer = z.nextGreaterElement(x,y);
    for (int i = 0; i < answer.size(); ++i) {
        std::cout << answer[i] << std::endl;
    }
    return 0;
}
