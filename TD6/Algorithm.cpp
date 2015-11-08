//
//  Algorithm.cpp
//  TD6
//
//  Created by Nicolas GHEUNG on 06/11/15.
//  Copyright © 2015 Nicolas GHEUNG. All rights reserved.
//

#include "Algorithm.hpp"

//1) A recursive algorithm (resp. iterative) that takes as argument an integer n and
//compute its factorial. Estimate its complexity.
/**************************************
***            QUESTION 1           ***
***************************************/
int factorielleAlgorithmRecursive(int n)
{
    if (n==0)
        return 1;
    else
        return n*factorielleAlgorithmRecursive(n-1);
}
//Complexité O(n)


int factorielleAlgorithmIterative(int n)
{
    int out = 1;
    while (n>0) {
        out = out*n;
        n--;
    }
    return out;
}
//Complexité O(n-1)


//2) A recursive algorithm (resp. iterative) that takes as arguments two integers, a and n,
//and compute an (a power n). Estimate its complexity.
/***************************************
 ***            QUESTION 2           ***
 ***************************************/
int powerAlgorithmRecursive(int a,int b)
{
    if (b==0)
        return 1;
    else
        return a*powerAlgorithmRecursive(a, b-1);
}
//Complexity O(b)

int powerAlgorithmIterative(int a,int b)
{
    int out= 1;
    while (b>0)
    {
        out=out*a;
        b--;
    }
    return out;
}
//Complexité O(b)


//3) A recursive algorithm (resp. iterative) that takes as arguments two integers, a and n,
//and compute their PGCD (Euclid algorithm). Estimate its complexity.
/***************************************
 ***            QUESTION 3           ***
 ***************************************/
int euclideAlgorithmRecursive(int a,int b)
{
    if (b==0)
        return a;
    else return euclideAlgorithmRecursive(b,a%b);
}
//Complexité O(b)


int euclideAlgorithmIterative(int a,int b)
{
    int out = 1;
    while (b>0) {
        out = a%b;
        a=b;
        b=out;
    }
    return a;
}
