/*
 * RegisterVariable.c
 *
 *  Created on: 16-Jul-2020
 *      Author: Clement
 */

#include<stdio.h>


int RegisterAddress()
{
    register int i = 10;
    //int* a = &i;
    //printf("%d", *a);
    getchar();
    return 0;
}





#include<stdio.h>

int StoringAddress()
{
    int i = 10;
    register int* a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}





#include<stdio.h>

int TwoStorageClass()
{
    int i = 10;
    //register static int* a = &i;
    //printf("%d", *a);
    getchar();
    return 0;
}




#include <stdio.h>

// error (global scope)
//register int x = 10;
int GlobalRegister()
{
    // works (inside a block)
    register int i = 10;
    printf("%d\n", i);
   // printf("%d", x);
    return 0;
}
