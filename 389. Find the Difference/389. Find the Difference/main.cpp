//
//  main.cpp
//  389. Find the Difference
//
//  Created by ckend on 2017/5/9.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    char findTheDifference(std::string s,std::string t){
        int arr[26] = {0};
        int arr2[26] = {0};
        for (int i = 0; i < s.size(); ++i) {
            arr[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); ++i) {
            arr2[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (arr[i] != arr2[i]) {
                return char(i+'a');
            }
        }
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
