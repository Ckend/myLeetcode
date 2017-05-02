//
//  main.cpp
//  345. Reverse Vowels of a String
//
//  Created by ckend on 2017/5/2.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    std::string reverseVowels(std::string s){
        int i = 0,j = s.length()-1;
        while (i < j) {
            i = s.find_first_of("aeiouAEIOU",i);
            j = s.find_last_of("aeiouAEIOU",j);
            if (i < j) {
                std::swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
