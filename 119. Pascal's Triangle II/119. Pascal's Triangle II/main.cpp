//
//  main.cpp
//  119. Pascal's Triangle II
//
//  Created by ckend on 2017/3/27.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    std::vector<int> getRow(int rowIndex){
        int numRows = rowIndex + 1;
        std::vector<std::vector<int> > answer(numRows);
        for (int i = 0; i < numRows; ++i) {
            answer[i].resize(i+1);
            answer[i][0] = answer[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                answer[i][j] = answer[i-1][j] + answer[i-1][j-1];
            }
        }
        return answer[rowIndex];
//        std::vector<int> answer(rowIndex + 1);
//        answer[0] = 1;
//        for (int i = 1; i < rowIndex + 1; ++i) {
//            for (int j = i; i >= 1; --j) {
//                answer[j] = answer[j] + answer[j-1];
//            }
//        }
//        return answer;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
