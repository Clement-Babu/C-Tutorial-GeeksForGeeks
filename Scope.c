/*
 * Scope.c
 *
 *  Created on: 11-Jul-2020
 *      Author: Clement
 */


#include<stdio.h>

int FileScope()
{
  {
      int x = 10, y  = 20;
      {
          // The outer block contains declaration of x and y, so
          // following statement is valid and prints 10 and 20
          printf("x = %d, y = %d\n", x, y);
          {
              // y is declared again, so outer block y is not accessible
              // in this block
              int y = 40;

// Changes the outer block variable x to 11
              x++;

 // Changes this block's variable y to 41
              y++;

              printf("x = %d, y = %d\n", x, y);
          }

          // This statement accesses only outer block's variables
          printf("x = %d, y = %d\n", x, y);
      }
  }
  return 0;
}



// C program to illustrate
// function prototype scope

#include <stdio.h>

// function prototype scope
//(not part of a function definition)
int Sub(int num1, int num2);

// file scope
int num1;

// Funntion to subtract
int Sub(int num1, int num2)
{
    return (num1-num2);
}

// Driver method
int FunctionPrototype(void)
{
    printf("%d\n", Sub(10,5));
    return 0;
}

void func1()
{
   {
       // label in scope even
       // though declared later
       goto label_exec;

label_exec:;
   }

   // label ignores block scope
   goto label_exec;
}

void funct2()
{

    // throwserror:
    // as label is in f() not g()
    //goto label_exec;
}



int BlockScope()
{
  {
      int x = 10;
  }
  {
      // Error: x is not accessible here
      //printf("%d", x);
  }
  return 0;
}




// C program to illustrate scope of variables

#include<stdio.h>

int ScopeOfVariable()
{
    // Initialization of local variables
    int x = 1, y = 2, z = 3;

    printf("x = %d, y = %d, z = %d\n",
    x, y, z);
    {

        // changing the variables x & y
        int x = 10;
        float y = 20;

        printf("x = %d, y = %f, z = %d\n",
        x, y, z);
        {

            // changing z
            int z = 100;
            printf("x = %d, y = %f, z = %d\n",
            x, y, z);
        }
    }
    return 0;
}



/* main.c */
 void swap();
 int buf[2] = {1, 2};
 int Swap()
 {
   swap();
   return 0;
 }

 /* swap.c */
 extern int buf[];

 int *bufp0 = &buf[0];
 int *bufp1;

 void swap()
 {
   int temp;

   bufp1 = &buf[1];
   temp = *bufp0;
   *bufp0 = *bufp1;
   *bufp1 = temp;
}

