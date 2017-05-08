//
//  main.cpp
//  387. First Unique Character in a String
//
//  Created by ckend on 2017/5/8.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
    int firstUniqChar(std::string s){
        int arr[26] = {0};
        for (int i = 0; i < s.size(); ++i) {
            arr[s[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); ++i) {
            if(arr[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
