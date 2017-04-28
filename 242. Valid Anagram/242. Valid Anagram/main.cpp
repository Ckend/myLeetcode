//
//  main.cpp
//  242. Valid Anagram
//
//  Created by ckend on 2017/4/28.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool isAnagram(std::string s, std::string t){
        if(s.length() != t.length())
            return false;
        int temp1[26] = { 0 };
        int temp2[26] = { 0 };
        for (int i = 0; i < s.length(); ++i) {
            temp1[s[i]-'a']++;
            temp2[t[i]-'a']++;
        }
        for (int i = 0;  i < s.length(); ++i) {
            if (temp1[i] != temp2[i]) {
                return false;
            }
        }
        return true;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
