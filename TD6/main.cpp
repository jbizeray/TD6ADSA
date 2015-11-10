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
    int array[] = {9,5,7,3,1,11,19,15,17,13};
    insertion_sort(array, sizeof(array)/sizeof(array[0]));
    for (int i = 0; i<sizeof(array)/sizeof(array[0]); i++) {
        std::cout<<array[i]<<"  ";

    }
    
    std::cout<<std::endl;
    std::cout<<std::endl;

    
    /***************************************
     ***            QUESTION 8           ***
     ***************************************/
    std::cout<< searchesIndexInOrderedTAB(array, 7, 0, sizeof(array)/sizeof(array[0]));
//    for (int i = 0; i<sizeof(array)/sizeof(array[0]); i++) {
//        std::cout<<array[i]<<"  ";
//        
//    }
    
    /***************************************
     ***            QUESTION 9           ***
     ***************************************/
    std::cout<<std::endl<<"Tri fusion"<<std::endl;
    int array2[] = {9,5,7,3,1,11,19,15,17,13};
    merge_sort(array2, 0, sizeof(array2)/sizeof(array2[0]));
    for (int i = 0; i<sizeof(array)/sizeof(array[0]); i++) {
        std::cout<<array[i]<<"  ";
        
    }
    
    std::cout<<std::endl;
    std::cout<<std::endl;
    
    return 0;
}
