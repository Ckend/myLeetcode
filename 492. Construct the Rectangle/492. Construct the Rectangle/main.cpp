//
//  main.cpp
//  492. Construct the Rectangle
//
//  Created by ckend on 2017/10/10.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution{
public:
    std::vector<int> constructRectangle(int area){
        int root = sqrt(area);
        while (area % root != 0) {
            root--;
        }
        return {area/root,root};
    }
};
