//
//  main.cpp
//  447. Number of Boomerangs
//
//  Created by ckend on 2017/9/10.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution{
public:
    int numberOfBoomerangs(std::vector<std::pair<int, int>>& points){
        int res = 0;
        for (int i = 0; i < points.size(); ++i) {
            std::map<int,int>mymap;
            for (int j = 0; j < points.size(); ++j) {
                if(i != j){
                    int a = points[i].first - points[j].first;
                    int b = points[i].second - points[j].second;
                    ++mymap[a*a + b*b];
                }
            }
            for (auto i = mymap.begin();i != mymap.end();++i) {
                res += i->second * (i->second-1);
            }
        }
        return res;
    }
};
