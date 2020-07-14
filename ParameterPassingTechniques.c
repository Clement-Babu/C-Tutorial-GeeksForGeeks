/*
 * ParameterPassingTechniques.c
 *
 *  Created on: 11-Jul-2020
 *      Author: Clement
 */


// C program to illustrate
// call by value
#include <stdio.h>

void func(int a, int b)
{
    a += b;
    printf("In func, a = %d b = %d\n", a, b);
}
int PassByValue(void)
{
    int x = 5, y = 7;

    // Passing parameters
    func(x, y);
    printf("In main, x = %d y = %d\n", x, y);
    return 0;
}



// C program to illustrate
// call by reference
#include <stdio.h>

void swapnum(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int Reference(void)
{
    int a = 10, b = 20;

    // passing parameters
    swapnum(&a, &b);

    printf("a is %d and b is %d\n", a, b);
    return 0;
}


//Pass By Name [Algol]
//procedure double(x);
//  real x;
//begin
//  x:=x*2
//end;
