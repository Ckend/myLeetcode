//
//  main.cpp
//  58.Length_of_Last Word
//
//  Created by ckend on 2017/2/26.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    int lengthOfLastWord(std::string s){
        int count = 0, i = (int)s.size() - 1;
        if (s == "")
            return 0;
        while (s[i] == ' ' && i >= 0)
            --i;
        while (s[i] != ' ' && i >= 0) {
            ++count;
            --i;
        }
        return count;
    }
};
int main(int argc, const char * argv[]) {
    std::string a = " ";
    Solution y;
    std::cout << y.lengthOfLastWord(a) << std::endl;
    return 0;
}
