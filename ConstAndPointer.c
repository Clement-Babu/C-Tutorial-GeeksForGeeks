/*
 * ConstAndPointer.c
 *
 *  Created on: 16-Jul-2020
 *      Author: Clement
 */


#include <stdio.h>
int PointerAndVariableNotConstant(void)
{
    int i = 10;
    int j = 20;
    int *ptr = &i;
    /* pointer to integer */
    printf("*ptr: %d\n", *ptr);

    /* pointer is pointing to another variable */
    ptr = &j;
    printf("*ptr: %d\n", *ptr);

    /* we can change value stored by pointer */
    *ptr = 100;
    printf("*ptr: %d\n", *ptr);

    return 0;
}



#include <stdio.h>
int ConstantPointer(void)
{
    int i = 10;
    int j = 20;
    /* ptr is pointer to constant */
    const int *ptr = &i;

    printf("ptr: %d\n", *ptr);
    /* error: object pointed cannot be modified
    using the pointer ptr */

    ptr = &j;          /* valid */
    printf("ptr: %d\n", *ptr);

    return 0;
}




#include <stdio.h>

int ConstantPointerAndVariableWithUpQulification(void)
{
    /* i is stored in read only area*/
    int const i = 10;
    int j = 20;

    /* pointer to integer constant. Here i
    is of type "const int", and &i is of
    type "const int *".  And p is of type
    "const int", types are matching no issue */
    int const *ptr = &i;

    printf("ptr: %d\n", *ptr);

    /* error */
    //*ptr = 100;

    /* valid. We call it up qualification. In
    C/C++, the type of "int *" is allowed to up
    qualify to the type "const int *". The type of
    &j is "int *" and is implicitly up qualified by
    the compiler to "const int *" */

    ptr = &j;
    printf("ptr: %d\n", *ptr);

    return 0;
}



#include <stdio.h>

int ConstantVariableToPointer(void)
{
    int i = 10;
    int const j = 20;

    /* ptr is pointing an integer object */
    int *ptr = &i;

    printf("*ptr: %d\n", *ptr);

    /* The below assignment is invalid in C++, results in error
       In C, the compiler *may* throw a warning, but casting is
       implicitly allowed */
    ptr = &j;

    /* In C++, it is called 'down qualification'. The type of expression
       &j is "const int *" and the type of ptr is "int *". The
       assignment "ptr = &j" causes to implicitly remove const-ness
       from the expression &j. C++ being more type restrictive, will not
       allow implicit down qualification. However, C++ allows implicit
       up qualification. The reason being, const qualified identifiers
       are bound to be placed in read-only memory (but not always). If
       C++ allows above kind of assignment (ptr = &j), we can use 'ptr'
       to modify value of j which is in read-only memory. The
       consequences are implementation dependent, the program may fail
       at runtime. So strict type checking helps clean code. */

    printf("*ptr: %d\n", *ptr);

    return 0;
}



#include <stdio.h>

int ContantPointertoPointVariable(void)
{
   int i = 10;
   int j = 20;
/* constant pointer to integer */
   int *const ptr = &i;

   printf("ptr: %d\n", *ptr);

   *ptr = 100;    /* valid */
   printf("ptr: %d\n", *ptr);

   //ptr = &j;        /* error */
   return 0;
}




#include <stdio.h>

int ConstantPointerToConstantInteger(void)
{
    int i = 10;
    int j = 20;
/* constant pointer to constant integer */
    const int *const ptr = &i;

    printf("ptr: %d\n", *ptr);

    //ptr = &j;     /* error */
    //*ptr = 100;   /* error */

    return 0;
}
