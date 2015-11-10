//
//  Algorithm.hpp
//  TD6
//
//  Created by Nicolas GHEUNG on 06/11/15.
//  Copyright © 2015 Nicolas GHEUNG. All rights reserved.
//

#ifndef Algorithm_hpp
#define Algorithm_hpp

#include <stdio.h>
#include <math.h>
#include <vector>

/***************************************
 ***            QUESTION 1           ***
 ***************************************/
int factorielleAlgorithmRecursive(int);
int factorielleAlgorithmIterative(int);


/***************************************
 ***            QUESTION 2           ***
 ***************************************/
int powerAlgorithmRecursive(int,int);
int powerAlgorithmIterative(int,int);

/***************************************
 ***            QUESTION 3           ***
 ***************************************/
int euclideAlgorithmRecursive(int,int);
int euclideAlgorithmIterative(int,int);


/***************************************
 ***            QUESTION 5           ***
 ***************************************/
 int min_TAB(int aray[]);
        
 /***************************************
 ***            QUESTION 6           ***
 ***************************************/
void insertion_sort(int arr[], int length);


/***************************************
 ***            QUESTION 8           ***
 ***************************************/
int searchesIndexInOrderedTAB(int * ,int , int , int );

/***************************************
 ***            QUESTION 9           ***
 ***************************************/
void merge_sort(int* , int , int );

#endif /* Algorithm_hpp */
