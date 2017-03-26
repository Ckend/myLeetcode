//
//  main.cpp
//  118. Pascal's Triangle
//
//  Created by ckend on 2017/3/26.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    std::vector<std::vector<int> > generate(int numRows){
        std::vector<std::vector<int> >answer(numRows);
        for (int i = 0; i < numRows; ++i) {
            answer[i].resize(i+1);
            answer[i][0] = answer[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                answer[i][j] = answer[i-1][j] + answer[i-1][j-1];
            }
        }
        return answer;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
