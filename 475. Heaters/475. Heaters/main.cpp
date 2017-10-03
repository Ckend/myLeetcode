//
//  main.cpp
//  475. Heaters
//
//  Created by ckend on 2017/9/30.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution{
public:
    int findRadius(std::vector<int> &houses,std::vector<int> &heaters){
        std::sort(houses.begin(), houses.end());
        std::sort(heaters.begin(), heaters.end());
        std::vector<int>res(houses.size(),INT_MAX);
        for (int i = 0,j = 0; i < houses.size() && j < heaters.size();) {
            if (houses[i] <= heaters[j]) {
                res[i] = heaters[j]-houses[i];
                ++i;
            }else{
                ++j;
            }
        }
        for (int i = houses.size()-1, j = heaters.size()-1; i>=0 && j >= 0; ) {
            if(houses[i] >= heaters[j]){
                res[i] = std::min((houses[i]-heaters[j]),res[i]);
                --i;
            }else{
                --j;
            }
        }
        return *std::max_element(res.begin(), res.end());
    }
};
