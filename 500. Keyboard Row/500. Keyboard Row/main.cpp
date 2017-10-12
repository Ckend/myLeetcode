//
//  main.cpp
//  500. Keyboard Row
//
//  Created by ckend on 2017/10/13.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>

class Solution{
public:
    std::vector<std::string> findWords(std::vector<std::string>& words){
        std::unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
        std::unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        std::unordered_set<char> row3 {'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
        std::vector<std::unordered_set<char>> rows {row1,row2,row3};
        std::vector<std::string>answer;
        for(std::string word : words){
            int The_Row = -1;
            for (int i = 0; i < 3; ++i) {
                if (rows[i].count(tolower(word[0])) > 0) {
                    The_Row = i;
                }else{
                    continue;
                }
            }
            bool flag = 1;
            for (int j = 0; j < word.size(); ++j) {
                if (rows[The_Row].count(tolower(word[j])) == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                answer.push_back(word);
            }
        }
        return answer;
    }
};
int main(int argc, const char * argv[]) {
    Solution y;
    std::vector<std::string> x = {"Hello","Alaska","Dad","Peace"};
    std::vector<std::string> z;
    z = y.findWords(x);
    for(std::string w : z){
        std::cout << w << std::endl;
    }
    return 0;
}
