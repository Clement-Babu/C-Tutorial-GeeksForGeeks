/*
 * StaticVariable.c
 *
 *  Created on: 16-Jul-2020
 *      Author: Clement
 */


#include<stdio.h>
int Initializer(void)
{
    return 50;
}

int NonConstantLiterals()
{
    //static int i = initializer();
    //printf(" value of i = %d", i);
    getchar();
    return 0;
}




#include<stdio.h>
int Static()
{
    static int i = 50;
    printf(" value of i = %d", i);
    getchar();
    return 0;
}
