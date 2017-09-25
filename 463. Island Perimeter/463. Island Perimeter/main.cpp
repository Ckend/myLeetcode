//
//  main.cpp
//  463. Island Perimeter
//
//  Created by ckend on 2017/9/26.
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
    int islandPerimeter(std::vector<std::vector<int>> &grid){
        int count = 0,side = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] == 1) {
                    ++count;
                    if (i < grid.size()-1 && grid[i+1][j] == 1) {
                        //小心别多算了
                        ++side;
                    }
                    if (j < grid[i].size()-1 && grid[i][j+1] == 1 ) {
                        ++side;
                    }
                }
            }
        }
        return count*4 - side*2;
    }
};
