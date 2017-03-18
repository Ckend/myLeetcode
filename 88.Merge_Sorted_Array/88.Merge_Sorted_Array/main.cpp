//
//  main.cpp
//  88.Merge_Sorted_Array
//
//  Created by ckend on 2017/3/18.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution{
public:
    void merge(std::vector<int>& nums1,int m,std::vector<int>& nums2,int n){
        int total = m + n - 1;
        int a = m-1;
        int b = n-1;
        while (a >= 0 && b >= 0) {
            nums1[total--] = (nums1[a]>nums2[b]) ? nums1[a--] : nums2[b--];
        }
        //a>-1会出现问题，避免和负数比较。
        while (b >= 0) {
            nums1[total--] = nums2[b--];
        }
    }
};
int main(int argc, const char * argv[]) {
    std::vector<int>a;
    std::vector<int>b;
    
    a.push_back(1);
    a.push_back(10);
    a.push_back(100);
    a.push_back(1000);
    
    b.push_back(22);
    b.push_back(220);
    b.push_back(2200);
    b.push_back(22000);
    
    Solution y;
    y.merge(a, 4, b, 4);
    
    for (int i = 0; i<8; ++i) {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
