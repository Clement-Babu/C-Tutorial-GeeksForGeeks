/*
 * Variables.c
 *
 *  Created on: 11-Jul-2020
 *      Author: Clement
 */


#include <stdio.h>
int DeclarationAndDefinition()
{
    // declaration and definition of variable 'a123'
    char a123 = 'a';

    // This is also both declaration and definition as 'b' is allocated
    // memory and assigned some garbage value.
    float b;

    // multiple declarations and definitions
    int _c, _d45, e;

    // Let us print a variable
    printf("%c \n", a123);

    return 0;
}

#include <stdio.h>
void function() {
  int x = 10; // local variable
}
int LocalVariable()
{
  function();
}

#include <stdio.h>
int x = 20;//global variable
void function1()
{
  printf("%d\n" , x);
}
void function2()
{
  printf("%d\n" , x);
}
int GlobalVariable() {

  function1();
  function2();
    return 0;
}

#include <stdio.h>
void function3(){
int x = 20;//local variable
static int y = 30;//static variable
x = x + 10;
y = y + 10;
printf("\n%d,%d",x,y);
}
int StaticVariable() {

  function3();
  function3();
  function3();
  return 0;
}

#include <stdio.h>
void function4()
{
  int x=10;//local variable (also automatic)
  auto int y=20;//automatic variable
}
int AutomaticVariable() {

    function4();
    return 0;
}

//myfile.h
//extern int x=10;//external variable (also global)
//program1.c
 //#include "myfile.h"
 #include <stdio.h>
 void printValue(){
 //printf("Global variable: %d", global_variable);
 }


#include <stdio.h>
// declaring and initializing an extern variable
extern int xx = 9;
// declaring and initializing a global variable
// simply int z; would have initialized z with
// the default value of a global variable which is 0
int z=10;
// using typedef to give a short name to long long int
// very convenient to use now due to the short name
typedef long long int LL;
// function which prints square of a no. and which has void as its
// return data type
void calSquare(int arg)
{
    printf("The square of %d is %d\n",arg,arg*arg);
}
// Here void means function main takes no parameters
int Teaser(void)
{
    // declaring a constant variable, its value cannot be modified
    const int a = 32;

    // declaring a  char variable
    char b = 'G';

    // telling the compiler that the variable z is an extern variable
    // and has been defined elsewhere (above the main function)
    extern int z;

    LL c = 1000000;

    printf("Hello World!\n");

    // printing the above variables
    printf("This is the value of the constant variable 'a': %d\n",a);
    printf("'b' is a char variable. Its value is %c\n",b);
    printf("'c' is a long long int variable. Its value is %lld\n",c);
    printf("These are the values of the extern variables 'x' and 'z'"
    " respectively: %d and %d\n",xx,z);

    // value of extern variable x modified
    xx=2;

    // value of extern variable z modified
    z=5;

    // printing the modified values of extern variables 'x' and 'z'
    printf("These are the modified values of the extern variables"
    " 'x' and 'z' respectively: %d and %d\n",xx,z);

    // using a static variable
    printf("The value of static variable 'y' is NOT initialized to 5 after the "
            "first iteration! See for yourself :)\n");

    while (xx > 0)
    {
        static int y = 5;
        y++;
        // printing value at each iteration
        printf("The value of y is %d\n",y);
        xx--;
    }

    // print square of 5
    calSquare(5);

    printf("Bye! See you soon. :)\n");

    return 0;
}



# include <stdio.h>

int xxx = 0;
int ff()
{
   return xxx;
}
int g()
{
   int xxx = 1;
   return ff();
}
int StaticScope()
{
  printf("%d", g());
  printf("\n");
  char a=getchar();
  putchar(a);
}
