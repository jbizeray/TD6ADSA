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



/***************************************
 ***            QUESTION 5           ***
 ***************************************/
 
 int min_TAB(int aray[])
{
    int i = 0;
    int small = aray[0];
    while(aray[i]!=NULL)
    {
        if(aray[i]<small)
        {
            small = aray[i];
        }
        i++;
    }

}
//Complexite O(n)
 
 /***************************************
 ***            QUESTION 6           ***
 ***************************************/
 
 void insertion_sort(int arr[], int length)
{
    int i;
    int j;
    int tmp;
    for(i=1;i<length;i++)
    {
        while(j>0 && arr[j-1]>arr[j])
        {
            tmp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=tmp;
            j--;
        }
    }
}

//Complexite O(n^2)
