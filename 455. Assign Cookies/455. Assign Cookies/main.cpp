//
//  main.cpp
//  455. Assign Cookies
//
//  Created by ckend on 2017/9/22.
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
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int i = 0;
        for (int j = 0; i < g.size() && j < s.size(); ++j) {
            if (g[i] <= s[j]) {
                ++i;
            }
        }
        return i;
    }
};
