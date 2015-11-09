//
//  main.cpp
//  TD6
//
//  Created by Nicolas GHEUNG on 06/11/15.
//  Copyright © 2015 Nicolas GHEUNG. All rights reserved.
//

#include <iostream>
#include "Algorithm.hpp"

int main(int argc, const char * argv[]) {
    /***************************************
     ***            QUESTION 1           ***
     ***************************************/
    std::cout << factorielleAlgorithmRecursive(3)<<std::endl;
    std::cout << factorielleAlgorithmIterative(3)<<std::endl;
    
    /***************************************
     ***            QUESTION 6           ***
     ***************************************/
    int array[] = {5,3,4,8,7,2,8,4,2,1,89,74,12,54,87,45};
    insertion_sort(array, sizeof(array)/sizeof(array[0]));
    for (int i = 0; i<sizeof(array)/sizeof(array[0]); i++) {
        std::cout<<array[i]<<"  ";

    }
    return 0;
}
