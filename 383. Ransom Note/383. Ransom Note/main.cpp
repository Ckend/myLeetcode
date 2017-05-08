//
//  main.cpp
//  383. Ransom Note
//
//  Created by ckend on 2017/5/8.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
class Solution{
public:
    bool canConstruct(std::string ransomNote,std::string magazine){
        int arr[26] = {0};
        for(int i = 0;i < magazine.size(); ++i)
            arr[magazine[i] - 'a']++;
        for (int i = 0; i < ransomNote.size(); ++i) {
            --arr[ransomNote[i] - 'a'];
            if (arr[ransomNote[i]] < 0) {
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
