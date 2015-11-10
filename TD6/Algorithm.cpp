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
    /*if (b==0)
        return 1;
    else
        return a*powerAlgorithmRecursive(a, b-1);*/
        
    int i;
    if (b==0)
        return 1;
    else if (b%2==0)
    {
        i = powerAlgorithmIterative(a,b/2);
        return i*i;
    }
    else
    {
        return a*powerAlgorithmRecursive(a, b-1);
    }
}
//Complexity O(log(b))

int powerAlgorithmIterative(int a,int b)
{
    /*int out= 1;
    while (b>0)
    {
        out=out*a;
        b--;
    }
    return out;*/
    int out= 1;
    if(b%2==0)
    {
        b=b/2;
        while (b>0)
        {
            out=out*a;
            b--;
        }
        return out;
    }
    else
    {
        while (b>0)
        {
            out=out*a;
            b--;
        }
        return out;
    }
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
 ***            QUESTION 4           ***
 ***************************************/



/***************************************
 ***            QUESTION 5           ***
 ***************************************/
 
int min_TAB(std::vector<int> const & array)
{
    int min = *array.begin();
    for (std::vector<int>::const_iterator ite = array.begin(); ite != array.end()  ; ite++) {
        if(*ite < min)
        {
            min = *ite;
        }
    }
    return min;
}
//Complexite O(n)
 
 /***************************************
 ***            QUESTION 6           ***
 ***************************************/
 
 void insertion_sort(int* array, int length)
{
    int tmp;
    int curseur;
    for(int i=0 ; i<length ; i++)
    {
        tmp = *(array +i);
        curseur = i;
        while(curseur>0 && *(array + curseur-1) > (tmp))
        {
            *(array+curseur) = *(array+curseur -1 );
            curseur--;
        }
        *(array+curseur) = tmp;
    }
}
//Complexite O(n^2)




/***************************************
 ***            QUESTION 8           ***
 ***************************************/
int searchesIndexInOrderedTAB(int * array,int element, int minIndex, int maxIndex)
{
    if (minIndex>maxIndex) return 0;
    int med = minIndex + (maxIndex-minIndex)/2;
    if (element>*(array+med)) {
        minIndex = med;
        return searchesIndexInOrderedTAB(array, element, med+1, maxIndex);
    }
    else if (element<*(array+med)) {
        maxIndex = med;
        return searchesIndexInOrderedTAB(array, element, minIndex, med-1);
    }
    else return med;
}
//Complexité : O(log n)


/***************************************
 ***            QUESTION 9           ***
 ***************************************/
void fusion(int* array, int minIndex, int curseur, int maxIndex)
{
    
    int dimArray1 =curseur - minIndex+1;
    int dimArray2 =maxIndex - curseur;
    
    /* create temp arrays */
    int array1[dimArray1];
    int array2[dimArray2];
    
    /* Copy data to temp arrays L[] and R[] */
    for(int i = 0; i < dimArray1; i++)
    {
        array1[i] = *(array+minIndex + i);
    }
    for(int j = 0; j < dimArray2; j++)
    {
        array2[j] = *(array+curseur + 1+ j);
    }
    
    /* Merge the temp arrays back into arr[l..r]*/
    int leftArrayIterator = 0;
    int rightArrayIterator = 0;
    int outArrayIterator = minIndex;
    while (leftArrayIterator < dimArray1 && rightArrayIterator < dimArray2)
    {
        if (*(array1+leftArrayIterator) <= *(array2+rightArrayIterator))
        {
            *(array+outArrayIterator) = *(array1+leftArrayIterator);
            leftArrayIterator++;
        }
        else
        {
            *(array+outArrayIterator) = *(array2+rightArrayIterator);
            rightArrayIterator++;
        }
        outArrayIterator++;
    }
    
    /* Copy the remaining elements of L[], if there are any */
    while (leftArrayIterator < dimArray1)
    {
        *(array+outArrayIterator) = *(array1+leftArrayIterator);
        leftArrayIterator++;
        outArrayIterator++;
    }
    
    /* Copy the remaining elements of R[], if there are any */
    while (rightArrayIterator < dimArray2)
    {
        *(array+outArrayIterator) = *(array2+rightArrayIterator);
        rightArrayIterator++;
        outArrayIterator++;
    }
}

void merge_sort(int* array, int minIndex, int maxIndex)
{
    if (minIndex<maxIndex)
    {
        int curseur = minIndex + (maxIndex-minIndex)/2;
        merge_sort(array, *(array+minIndex), *(array+curseur));
        merge_sort(array, *(array+curseur+1), *(array+maxIndex));
        fusion(array, minIndex, curseur, maxIndex);
    }
}