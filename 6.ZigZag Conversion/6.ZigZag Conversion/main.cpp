//
//  main.cpp
//  6.ZigZag Conversion
//
//  Created by ckend on 2017/1/21.
//  Copyright © 2017年 ckend. All rights reserved.
//

#include <iostream>

class solution{
public:
    std::string convert(std::string s,int numRows){
        std::string result = "";
        unsigned long length;
        int step1,step2;
        length = s.size();
        
        if(numRows == 1)
            return s;
        for(int i = 0; i < numRows; ++i){
            
            step1 = 2*(numRows - i - 1);
            step2 = 2*i;
            int pos;
            pos = i;
            if(pos < length)
                result += s.at(pos);
            while(1){
                pos += step1;
                if(pos>=length)
                    break;
                if(step1)
                    result += s.at(pos);
                pos += step2;
                if(pos>=length)
                    break;
                if(step2)
                    result += s.at(pos);
            }
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    std::string x = "A";
    solution y;
    std::string answer = y.convert(x, 2);
    std::cout << answer << std::endl;
    return 0;
}
