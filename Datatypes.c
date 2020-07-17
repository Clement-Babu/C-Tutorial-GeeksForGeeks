/*
 * Datatypes.c
 *
 *  Created on: 14-Jul-2020
 *      Author: Clement
 */


#include <stdio.h>
int Datatypes()
{
    int a = 1;
    char b ='G';
    double c = 3.14;
    printf("Hello World!\n");

    //printing the variables defined above along with their sizes
    printf("Hello! I am a character. My value is %c and "
           "my size is %lu byte.\n", b,sizeof(char));
    //can use sizeof(b) above as well

    printf("Hello! I am an integer. My value is %d and "
           "my size is %lu  bytes.\n", a,sizeof(int));
    //can use sizeof(a) above as well

    printf("Hello! I am a double floating point variable."
           " My value is %lf and my size is %lu bytes.\n",c,sizeof(double));
    //can use sizeof(c) above as well

    printf("Bye! See you soon. :)\n");

    return 0;
}


#include<stdbool.h>
int boolean(void){
	  bool arr[2] = {true, false};
	  return 0;
}

#include <stdio.h>
int Ascii()
{
    char a = '12';

    printf("%d", a);


    return 0;
}



#include <stdio.h>
int IntegerPromotion(void){
	int a=-1;
	if (4<a){
		printf("a is greater");
	}
	else{
		printf("size of int is greater");
	}
}



#include <stdio.h>

int CharPromotion()
{
    char ch1 = 125, ch2 = 10;
    ch1 = ch1 + ch2;
    printf("%d\n", ch1);
    printf("%c\n", ch1 - ch2 - 4);
    return 0;
}




#include <stdio.h>
int IntegerPromotion2()
{
    char a = 30, b = 40, c = 10;
    char d = (a * b) / c;
    printf ("%d ", d);
    return 0;
}





#include<stdio.h>
int FloatPromotion()
{
    float x = 0.1;
    if (x == 0.1)
        printf("IF");
    else if (x == 0.1f)
        printf("ELSE IF");
    else
        printf("ELSE");
}



// C++ program to check the size of 'long'
// data type

int LongDefectes()
{
    printf(" Size of int = ",sizeof(int));
    printf(" Size of long = " ,sizeof(long) );
    printf("Size of long long = " , sizeof(long long));
}


// Declaration of various standard library functions.

// Here argument of 'n' refers to maximum blocks that can be
// allocated which is guaranteed to be non-negative.
void *malloc(size_t n);

// While copying 'n' bytes from 's2' to 's1'
// n must be non-negative integer.
void *memcpy(void *s1, void const *s2, size_t n);

// strlen() uses size_t because the length of any string
// will always be at least 0.
size_t strlen(char const *s);


// An example of implicit conversion
#include<stdio.h>
int ImplicitCasting()
{
    int x = 10;    // integer x
    char y = 'a';  // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    printf("x = %d, z = %f", x, z);
    return 0;
}




// C program to demonstrate explicit type casting
#include<stdio.h>

int ExplicitCasting()
{
    double x = 1.2;

    // Explicit conversion from double to int
    int sum = (int)x + 1;

    printf("sum = %d", sum);

    return 0;
}
